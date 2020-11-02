//
// Created by Mereslann on 3/09/2019.
//

#ifndef MAINMENU_H
#define MAINMENU_H

#include "GameState.h"
#include "Zorkish.h"


class Zorkish;


class MainMenu : public GameState {
public:
    MainMenu();
    virtual ~MainMenu();

    virtual std::string Input(Zorkish * game);
    virtual void Render(Zorkish * game);
    virtual void Update(Zorkish * game, std::string input);

};


#endif //MAINMENU_H
