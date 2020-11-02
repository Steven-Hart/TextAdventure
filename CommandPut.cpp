//
// Created by Mereslann on 22/10/2019.
//

#include "CommandPut.h"

CommandPut::CommandPut(World *world) : Command(world) {

}

string CommandPut::Execute(vector<string> args) {
    string msg;
    if(args.size() > 1){
        if(world->player->ItemExists(args[1])){
            world->player->MoveItem(world->player->location, world->player->GetItem(args[1]));
            return "You have placed " + world->player->location->GetItem(args[1])->name + " on the ground";
        }

        if(args.size() > 2){
            if(args[2] == "in"){
                if(world->player->location->ItemExists(args[3])){
                    msg += "You have placed " + world->player->location->GetItem(args[1])->name + " into " + world->player->location->GetItem(args[3])->name;
                    world->player->location->MoveItem(world->player->location->GetItem(args[3]), world->player->location->GetItem(args[1]));
                }
                else{
                    msg += "Container or item doesnt exist, sorry";
                }
            }
        }
        else{
            msg += "There is no item in your inventory";
        }
    }
    return msg;
}
