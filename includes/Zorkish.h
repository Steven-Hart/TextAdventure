//
// Created by Mereslann on 3/09/2019.
//

#ifndef ZORKISH_H
#define ZORKISH_H

#include <string>
#include "MainMenu.h"
#include "About.h"
#include "Help.h"
#include "SelectAdventure.h"
#include "Gameplay.h"
#include "ViewHallOfFame.h"
#include "NewHighScore.h"
#include "GameState.h"

class Zorkish {
public:
    enum State {
        MainMenu,
        About,
        Help,
        SelectAdventure,
        GamePlay,
        NewHighScore,
        ViewHallOfFame
    };


    Zorkish();
    virtual ~Zorkish();

    std::string Input();
    void Update();
    void Render();

    void SetState(State state);
    void LoadFile(State state, std::string filename);

    void SetGameOver();
    bool GetGameOver();

private:
    GameState * p_current_state;
    bool gameover;
};


#endif //ZORKISH_H
