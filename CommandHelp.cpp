//
// Created by Mereslann on 17/10/2019.
//

#include "CommandHelp.h"

CommandHelp::CommandHelp(World* world, map<string , Command*>* commands) : Command(world) {
this->commands = commands;
this->syntax = "(command)";
}

string CommandHelp::Execute(vector <string> args) {
    cout << "Current Commands" <<endl;
    for (auto const& pair: *this->commands) {
        std::cout << "{" << pair.first << "} " << pair.second->syntax << " \n";
    }
    return "";
}
