//
// Created by Mereslann on 17/10/2019.
//

#include "CommandInventory.h"

CommandInventory::CommandInventory(World *world) : Command(world) {
    this->syntax = "(command)";
}

string CommandInventory::Execute(vector<string> args) {
    world->player->Display();
    return "";
}
