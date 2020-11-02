//
// Created by Mereslann on 3/09/2019.
//

#ifndef NEWHIGHSCHORE_H
#define NEWHIGHSCHORE_H


#include "GameState.h"
#include "Zorkish.h"


class Zorkish;


class NewHighScore : public GameState {
public:
    NewHighScore();
    virtual ~NewHighScore();

    virtual std::string Input(Zorkish * game);
    virtual void Render(Zorkish * game);
    virtual void Update(Zorkish * game, std::string input);

};


#endif //NEWHIGHSCHORE_H
