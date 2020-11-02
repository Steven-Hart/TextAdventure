//
// Created by Mereslann on 16/10/2019.
//

#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
#include <vector>
#include <string>

#include "World.h"


using namespace std;

class Command {
public:
    Command(World *world);
    virtual ~Command();
    virtual string Execute(vector<string> args) = 0;

    World* world;

    string syntax;
};


#endif //COMMAND_H
