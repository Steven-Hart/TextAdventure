//
// Created by Mereslann on 3/09/2019.
//

#include <iostream>
#include "SelectAdventure.h"

SelectAdventure::SelectAdventure() : GameState(std::string("SelectAdventure")) {

}

SelectAdventure::~SelectAdventure() {}

std::string SelectAdventure::Input(Zorkish *game) {
    std::cout << "Choose your ADVENTURE :> ";
    std::string dir;
    getline(cin, dir);
    return dir;
}
void SelectAdventure::Update(Zorkish *game, std::string input) {
    game->SetState(game->MainMenu);
    game->LoadFile(game->GamePlay, input);
}
void SelectAdventure::Render(Zorkish *game) {
    std::cout << "---------------------------------------------------------" <<std::endl;
    std::cout << "Zorkish : : SelectAdventure" <<std::endl;
    std::cout << "---------------------------------------------------------" <<std::endl;
    std::cout << "Type in the text file and extension you want to load" <<std::endl;
}