//
// Created by Mereslann on 16/10/2019.
//

#ifndef COMMANDMANAGER_H
#define COMMANDMANAGER_H


#include "World.h"
#include "Command.h"
#include "CommandMove.h"
#include "CommandLook.h"
#include "CommandHelp.h"
#include "CommandInventory.h"
#include "CommandDebugTree.h"
#include "CommandAlias.h"
#include "CommandTake.h"
#include "CommandPut.h"
#include "CommandOpen.h"

#include <iostream>
#include <string>
#include <map>

using namespace std;

class CommandManager {
public:
    CommandManager(World* world);
    string Execute(vector<string> args);

//    void InsertAlias(string alias, string command);
private:
    map<string , Command*> commands;
    World* world;
};


#endif //COMMANDMANAGER_H
