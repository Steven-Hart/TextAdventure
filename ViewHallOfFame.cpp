//
// Created by Mereslann on 3/09/2019.
//

#include <iostream>
#include "ViewHallOfFame.h"

ViewHallOfFame::ViewHallOfFame() : GameState(std::string("ViewHallOfFame")) {

}

ViewHallOfFame::~ViewHallOfFame() {}

std::string ViewHallOfFame::Input(Zorkish *game) {
    std::cout << "Press Enter to return to the Main Menu:> ";
    std::string dir;
    getline(cin, dir);
    return dir;
}
void ViewHallOfFame::Update(Zorkish *game, std::string input) {
    game->SetState(game->MainMenu);
}
void ViewHallOfFame::Render(Zorkish *game) {
    std::cout << "---------------------------------------------------------" <<std::endl;
    std::cout << "Zorkish : : ViewHallOfFame" <<std::endl;
    std::cout << "---------------------------------------------------------" <<std::endl;
    std::cout << "There is nothing here. Come back next time " <<std::endl;
}
