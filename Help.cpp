//
// Created by Mereslann on 3/09/2019.
//
#include <iostream>
#include "Help.h"

Help::Help() : GameState(std::string("Help")) {

}

Help::~Help() {}

std::string Help::Input(Zorkish *game) {
    std::cout << "Press Enter to return to the Main Menu:> ";
    std::string dir;
    getline(cin, dir);
    return dir;
}
void Help::Update(Zorkish *game, std::string input) {
    game->SetState(game->MainMenu);
}
void Help::Render(Zorkish *game) {
    std::cout << "---------------------------------------------------------" <<std::endl;
    std::cout << "Zorkish : : Help" <<std::endl;
    std::cout << "---------------------------------------------------------" <<std::endl;
    std::cout << "quit, hiscore (for testing)" <<std::endl;
}