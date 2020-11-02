//
// Created by Mereslann on 3/09/2019.
//

#include <iostream>
#include "NewHighScore.h"

NewHighScore::NewHighScore() : GameState(std::string("NewHighScore")) {

}

NewHighScore::~NewHighScore() {}

std::string NewHighScore::Input(Zorkish *game) {
    std::cout << "Input your name:> ";
    std::string dir;
    getline(cin, dir);
    return dir;
}
void NewHighScore::Update(Zorkish *game, std::string input) {
    game->SetState(game->MainMenu);
}
void NewHighScore::Render(Zorkish *game) {
    std::cout << "---------------------------------------------------------" <<std::endl;
    std::cout << "Zorkish : : NewHighScore" <<std::endl;
    std::cout << "---------------------------------------------------------" <<std::endl;
    std::cout << "Wow congratulations! you are part of the top 10 high scorers (however nothing will happen and you will go back to menu)" <<std::endl;
}