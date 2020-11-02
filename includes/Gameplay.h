//
// Created by Mereslann on 3/09/2019.
//

#ifndef GAMEPLAY_H
#define GAMEPLAY_H

#include <iostream>
#include <string>
#include "GameState.h"
#include "Zorkish.h"
#include "World.h"
#include "CommandManager.h"



class Zorkish;


class Gameplay : public GameState {
public:
    Gameplay(string * filename);
    virtual ~Gameplay();

    virtual std::string Input(Zorkish * game);
    virtual void Render(Zorkish * game);
    virtual void Update(Zorkish * game, std::string input);
private:

    World* world;
    CommandManager* commandManager;
};

#endif //GAMEPLAY_H
