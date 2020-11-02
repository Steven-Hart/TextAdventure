//
// Created by Mereslann on 22/10/2019.
//

#ifndef COMMANDTAKE_H
#define COMMANDTAKE_H


#include "Command.h"

class CommandTake: public Command {
public:
    CommandTake(World *world);
    virtual string Execute(vector<string> args);

};

#endif //COMMANDTAKE_H
