//
// Created by Mereslann on 17/10/2019.
//

#ifndef COMMANDHELP_H
#define COMMANDHELP_H

#include "Command.h"

class CommandHelp: public Command {
public:
    CommandHelp( World* world, map<string , Command*>* commands);

    virtual string Execute(vector<string> args);
private:
    map<string , Command*>* commands;
};
#endif //COMMANDHELP_H
