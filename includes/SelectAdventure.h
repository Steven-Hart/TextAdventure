//
// Created by Mereslann on 3/09/2019.
//

#ifndef SELECTADVENTURE_H
#define SELECTADVENTURE_H


#include "GameState.h"
#include "Zorkish.h"


class Zorkish;


class SelectAdventure : public GameState {
public:
    SelectAdventure();
    virtual ~SelectAdventure();

    virtual std::string Input(Zorkish * game);
    virtual void Render(Zorkish * game);
    virtual void Update(Zorkish * game, std::string input);

};


#endif //TASK_9_SELECTADVENTURE_H
