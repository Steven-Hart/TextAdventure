//
// Created by Mereslann on 17/10/2019.
//

#include "CommandAlias.h"

CommandAlias::CommandAlias(World *world, map<string , Command*> * commands) : Command(world) {
    this->commands = commands;
    this->syntax = "alias (new alias) (command)";
}

string CommandAlias::Execute(vector<string> args) {
    if(args.size() == 3){
        this->commands->insert({args[1], this->commands->operator[](args[2])});
        return args[1] + " is now registered to " + args[2];
    }
    else{
        return syntax;
    }

}
