//
// Created by Mereslann on 16/10/2019.
//

#ifndef COMMANDMOVE_H
#define COMMANDMOVE_H

#include "Command.h"

class CommandMove : public Command {
public:
    CommandMove(World *world);
    virtual string Execute(vector<string> args);
};


#endif //COMMANDMOVE_H
