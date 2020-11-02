//
// Created by Mereslann on 3/09/2019.
//

#ifndef VIEWHALLOFFAME_H
#define VIEWHALLOFFAME_H


#include "GameState.h"
#include "Zorkish.h"


class Zorkish;


class ViewHallOfFame : public GameState {
public:
    ViewHallOfFame();
    virtual ~ViewHallOfFame();

    virtual std::string Input(Zorkish * game);
    virtual void Render(Zorkish * game);
    virtual void Update(Zorkish * game, std::string input);

};


#endif //TASK_9_VIEWHALLOFFAME_H
