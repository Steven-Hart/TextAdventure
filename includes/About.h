//
// Created by Mereslann on 3/09/2019.
//

#ifndef ABOUT_H
#define ABOUT_H

#include "GameState.h"
#include "Zorkish.h"

class Zorkish;

class About : public GameState {
public:
    About();
    virtual ~About();

    virtual std::string Input(Zorkish * game);
    virtual void Update(Zorkish * game, std::string input);
    virtual void Render(Zorkish * game);
};


#endif //ABOUT_H
