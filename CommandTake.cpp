//
// Created by Mereslann on 22/10/2019.
//

#include "CommandTake.h"

CommandTake::CommandTake(World *world) : Command(world) {

}

string CommandTake::Execute(vector<string> args) {
    string msg;
    if(args.size() > 1){
        if(world->player->location->ItemExists(args[1])){
            Item * item = world->player->location->GetItem(args[1]);
            if(args.size() == 2) {
                {
                    world->player->location->MoveItem(world->player, item);
                    return "You have picked up a " + world->player->GetItem(args[1])->name;
                }
            }
            if(args.size() == 4){
                if(args[2] == "from"){
                    if(world->player->location->ItemExists(args[3])){
                        Item * container = world->player->location->GetItem(args[3]);
                        if(container->ItemExists(args[1])){
                            msg += "You have picked up " + item->name + " from " + container->name;
                            container->MoveItem(world->player, item);
                            return msg;
                        }
                        else{
                            return "Item doesn't exist in the container";
                        }
                    }
                    else{
                        return "Container doesnt exist on the ground, sorry";
                    }
                }
                else{
                    return "no container specified";
                }
            }
        }
        else{
            return "item doesnt exist on ground";
        }
    }
    return msg;
}
