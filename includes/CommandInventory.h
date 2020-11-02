//
// Created by Mereslann on 17/10/2019.
//

#ifndef COMMANDINVENTORY_H
#define COMMANDINVENTORY_H


#include "Command.h"

class CommandInventory: public Command {
public:
    CommandInventory(World *world);
    virtual string Execute(vector<string> args);

};


#endif //COMMANDINVENTORY_H
