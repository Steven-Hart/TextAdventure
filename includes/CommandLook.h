//
// Created by Mereslann on 17/10/2019.
//

#ifndef COMMANDLOOK_H
#define COMMANDLOOK_H

#include "Command.h"

class CommandLook: public Command {
public:
    CommandLook(World *world);
    virtual string Execute(vector<string> args);

};


#endif //COMMANDLOOK_H
