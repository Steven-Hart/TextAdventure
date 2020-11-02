//
// Created by Mereslann on 17/10/2019.
//

#ifndef COMMANDDEBUGTREE_H
#define COMMANDDEBUGTREE_H


#include "Command.h"

class CommandDebugTree: public Command {
public:
    CommandDebugTree(World *world);
    virtual string Execute(vector<string> args);

};



#endif //COMMANDDEBUGTREE_H
