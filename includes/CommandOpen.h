//
// Created by Mereslann on 22/10/2019.
//

#ifndef COMMANDOPEN_H
#define COMMANDOPEN_H

#include "Command.h"

class CommandOpen: public Command {
public:
    CommandOpen(World *world);
    virtual string Execute(vector<string> args);

};


#endif //COMMANDOPEN_H
