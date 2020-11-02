//
// Created by Mereslann on 22/10/2019.
//

#include "CommandOpen.h"

CommandOpen::CommandOpen(World *world) : Command(world) {

}

string CommandOpen::Execute(vector<string> args) {
    if(args.size() > 1){
        if(world->player->location->ItemExists(args[1])){
            Item * item = world->player->location->GetItem(args[1]);
            if(args.size() == 2) {
                {
                    dynamic_cast<ComponentMessager *>(world->player->getComponent("messenger"))->Dispatch("open", item);
                    return "You have opened the " + item->name;
                }
            }
            if(args.size() == 4){
                if(args[2] == "with"){
                    if(world->player->location->ItemExists(args[3])){
                        Item * key = world->player->location->GetItem(args[3]);
                        dynamic_cast<ComponentMessager *>(key->getComponent("messenger"))->Dispatch("open", item);

                        return "You have opened " + item->name + " with " + key->name;
                    }
                    else{
                        return "item to open container doesnt exist on the ground, sorry";
                    }
                }
                else{
                    return "no container specified";
                }
            }
        }
        else{
            return "Item doesnt exist on ground";
        }
    }

    return syntax;
}
