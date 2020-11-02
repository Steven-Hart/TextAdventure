//
// Created by Mereslann on 17/10/2019.
//

#include "CommandLook.h"

CommandLook::CommandLook(World *world) : Command(world) {
    syntax = "(command) ... ; (command) at ... ; (command) in ... ;";
}

string CommandLook::Execute(vector <string> args) {


    if(args.size() > 1){
        if( world->player->location->ItemExists(args[2])){
            if(args[1] == "at"){
                return world->player->location->DisplayItem(args[2]);
            }
            else if(args[1] == "in"){
                if(world->player->location->GetItem(args[2])->checkComponent("lock")){
                    if(dynamic_cast<ComponentLock *>(world->player->location->GetItem(args[2])->getComponent("lock"))->isLocked()){
                        return "This item is locked";
                    }
                }
                world->player->location->GetItem(args[2])->Display();
                return "";
            }
        }
        else{
            return "item doesnt exist on ground";
        }
    }
    else {
        world->graph->printAdjLocations(world->player->location->id);
        world->player->location->Display();
        return "";
    }
    return syntax;
}
