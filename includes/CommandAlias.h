//
// Created by Mereslann on 17/10/2019.
//

#ifndef COMMANDALIAS_H
#define OMMANDALIAS_H


#include "Command.h"

class CommandAlias: public Command {
public:
    CommandAlias(World *world, map<string , Command*>* commands);
    virtual string Execute(vector<string> args);
private:
    map<string , Command*> * commands;
};

#endif //COMMANDALIAS_H
