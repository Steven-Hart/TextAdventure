//
// Created by Mereslann on 3/09/2019.
//

#ifndef HELP_H
#define HELP_H


#include "GameState.h"
#include "Zorkish.h"


class Zorkish;


class Help : public GameState {
public:
    Help();
    virtual ~Help();

    virtual std::string Input(Zorkish * game);
    virtual void Render(Zorkish * game);
    virtual void Update(Zorkish * game, std::string input);

};



#endif //HELP_H
