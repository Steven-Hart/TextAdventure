//
// Created by Mereslann on 16/10/2019.
//

#include "World.h"

World::World(string *filename) {
    edges = new vector<Edge>;

    player = new class Player();

    // get locations and items from file
    readfromfile(&this->locations, &this->items, filename);

    // adds all items to appropriate locations
    for(auto const& itemOnGround: this->items){
        locations[itemOnGround.first].Insert(itemOnGround.second);
        cout << itemOnGround.second->name << " placed at loacation " << locations[itemOnGround.first].name << endl;
    }

    for(auto const& itemInItem: this->items_in_items){
        for(auto const& item: this->itemList){
            if(itemInItem.second == item->id){
                itemInItem.first->Insert(item->Copy());
                cout << item->name << " placed in " << itemInItem.first->name << endl;
            }
        }
    }

    // set player location
    player->location = &locations[0];

    // construct graph
    graph = new Graph(*edges, locations);
}

vector<string> World::Split(const string& subject)
{
    std::istringstream ss{subject};
    using StrIt = std::istream_iterator<std::string>;
    std::vector<std::string> container{StrIt{ss}, StrIt{}};
    return container;
}

vector<string> World::Split(const string& s, char delimiter)
{
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(s);
    while (std::getline(tokenStream, token, delimiter))
    {
        tokens.push_back(token);
    }
    return tokens;
}

void World::addEdgeFromFile(int src, vector<string> links) {
    vector<string> dest;
    int idest;
    for(auto const& value: links){
        dest = Split(value, '=');
        stringstream geek(dest[1]);
        geek >> idest;
        edges->push_back({dest[0], idest, src});
    }
}

Location World::getLocation(string s, string delimiter){
    vector<string> splitList;
    size_t pos = 0;
    string token;
    int count = 0;
    Location l;
    while((pos = s.find(delimiter)) != string::npos){
        token = s.substr(0,pos);
        splitList.push_back(token);
        s.erase(0,pos + delimiter.length());
        if(count == 1){
            stringstream geek(token);
            geek >> l.id;
        } else if (count == 2){
            addEdgeFromFile(l.id, Split(token));
        } else if (count == 3){
            l.name = token;
        }
        count++;
    }
    splitList.push_back(s);
    l.desc = s;
    return l;
}

vector<pair <int, Item*>> World::getItem(string s, string delimiter){
    vector<pair <int, Item*>> itemsInWorld;
    size_t pos = 0;
    string token;
    int count = 0;
    int locationid;
    Item * item = new Item();
    itemList.push_back(item);
    while((pos = s.find(delimiter)) != string::npos){
        token = s.substr(0,pos);
        s.erase(0,pos + delimiter.length());
        if(count == 1){
            stringstream geek(token);
            geek >> item->id;
        } else if (count == 2){
            item->name = token;
        }
        else if (count == 3){
            item->desc = token;
        }
        else if (count == 4){
            for(auto const& value: Split(token)){
                stringstream geek(value);
                geek >> locationid;
                itemsInWorld.emplace_back(locationid, item);
            }
        }
        else if (count == 5){
            for(auto const& value: Split(token)) {
                item->Components.insert(pair<string, Component*>("gameobject", new ComponentGameObject()));
                if(value == "L"){
                    item->Components.insert(pair<string, Component*>("lock", new ComponentLock()));
                }
            }
        }

        count++;
    }
    for(auto const& value: Split(s)){
        int itemid;
        stringstream geek(value);
        geek >> itemid;
        items_in_items.insert(pair<Item*, int>(item, itemid));
    }

    return itemsInWorld;
}

void World::readfromfile(vector<Location>* locations, multimap<int, Item*> * items, string * filename){
    string line;
    ifstream myfile (*filename);
    if(myfile.is_open())
    {
        while (getline(myfile, line)){
            if(line.empty()){}
            else if(line.front() == '#'){}
            else if (line.front() == 'L'){
                locations->push_back(getLocation(line, ":"));
            }
            else if (line.front() == 'I'){
                for(auto const& value: getItem(line, ":")){
                    items->insert(value);
                }
            }
        }
        myfile.close();
    }
    else cout << "Unable to open file";
}
