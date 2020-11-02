//
// Created by Mereslann on 3/09/2019.
//

#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <algorithm>
#include <string>


class Zorkish;

class GameState {
public:
    GameState(std::string name);
    virtual ~GameState();

    virtual std::string Input(Zorkish * p_game);
    virtual void Update(Zorkish * p_game, std::string input);
    virtual void Render(Zorkish * p_game);

    std::string GetName() { return state_name; }

private:
    std::string state_name;

};


#endif //GAMESTATE_H
