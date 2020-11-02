//
// Created by Mereslann on 17/10/2019.
//

#include "CommandDebugTree.h"

CommandDebugTree::CommandDebugTree(World *world) : Command(world) {
    this->syntax = "(command)";
}

string CommandDebugTree::Execute(vector<string> args) {
    world->graph->printAllLocations();
    return "";
}
