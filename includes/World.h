//
// Created by Mereslann on 16/10/2019.
//

#ifndef WORLD_H
#define WORLD_H

#include <iostream>
#include "GameState.h"
//#include "Zorkish.h"
#include "Player.h"
#include "Graph.h"
#include "Location.h"
#include "Item.h"
#include "GameObject.h"
#include "ComponentHealth.h"
#include "ComponentGameObject.h"
#include "ComponentLock.h"
#include <fstream>
#include <sstream>
#include <string>
#include <iterator>

using namespace std;

class World {
public:
    World(string * filename);

    vector<string> Split(const std::string& subject);

    Graph * graph;
    Player * player;

private:

    vector<Edge> * edges;
    vector<Location> locations;
    vector<Item*> itemList;
    //Items on Ground
    multimap<int, Item*> items;
    //Items with items inside
    multimap<Item*, int> items_in_items;

    void addEdgeFromFile(int src, vector<string> dest);

    void readfromfile(vector<Location>* locations, multimap<int, Item*> * items, string * filename);
    Location getLocation(string s, string delimiter);

    vector<pair <int, Item*>> getItem(string s, string delimiter);

    vector<std::string> Split(const string &s, char delimiter);
};


#endif //WORLD_H
