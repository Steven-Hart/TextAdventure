//
// Created by Mereslann on 16/10/2019.
//

#include "CommandMove.h"

CommandMove::CommandMove(World *world) : Command(world) {
    this->syntax = "(command) ...";
}

string CommandMove::Execute(vector<string> args) {
    if(args.size() > 1){
            world->player->Move(world->graph->getNewLocation(world->player->location->id, args[1])) ;
            return "You have moved to " + world->player->location->name;
        }
    else {
        return "Move where? (move ....)";
    }

}


