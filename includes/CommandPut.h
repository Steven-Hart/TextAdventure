//
// Created by Mereslann on 22/10/2019.
//

#ifndef COMMANDPUT_H
#define COMMANDPUT_H


#include "Command.h"

class CommandPut: public Command {
public:
    CommandPut(World *world);
    virtual string Execute(vector<string> args);

};


#endif //COMMANDPUT_H
