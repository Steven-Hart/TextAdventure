//
// Created by Mereslann on 16/10/2019.
//

#include "CommandManager.h"

CommandManager::CommandManager(World* world) {
    this->world = world;

    // Help commands
    commands.insert(pair<string, Command*>("help", new CommandHelp(this->world, &commands)));
    // Alias commands
    commands.insert(pair<string, Command*>("alias", new CommandAlias(this->world, &commands)));
    // Debug commands
    commands.insert(pair<string, Command*>("debug", new CommandDebugTree(this->world)));
    // Move commands
    commands.insert(pair<string, Command*>("move", new CommandMove(this->world)));
    commands.insert(pair<string, Command*>("go", commands["move"]));
    // Inventory commands
    commands.insert(pair<string, Command*>("inventory", new CommandInventory(this->world)));
    commands.insert(pair<string, Command*>("i", commands["inventory"]));
    // Look commands
    commands.insert(pair<string, Command*>("look", new CommandLook(this->world)));
    commands.insert({"examine", commands["look"]});
    // Take commands
    commands.insert(pair<string, Command*>("take", new CommandTake(this->world)));
    // Put commands
    commands.insert(pair<string, Command*>("put", new CommandPut(this->world)));
    // Open commands
    commands.insert(pair<string, Command*>("open", new CommandOpen(this->world)));


}


string CommandManager::Execute(vector<string> args) {
    //check if nothing
    if(args.empty()){
        return "";
    }

    // find the command based on the first word
    auto it = commands.find(args[0]);
    if(it != commands.end())
    {
        //element found;
        return it->second->Execute(args);
    }
    else{
        return "Sorry that command is not in the command map";
    }
}


