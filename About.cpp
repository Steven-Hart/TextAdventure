//
// Created by Mereslann on 3/09/2019.
//
#include <iostream>
#include "About.h"

About::About() : GameState(std::string("About")) {

}

About::~About() {}

std::string About::Input(Zorkish *game) {
    std::cout << "Press Enter to return to the Main Menu:> ";
    std::string dir;
    std::cin >> dir;
    return dir;
}
void About::Update(Zorkish *game, std::string input) {
    game->SetState(game->MainMenu);
}
void About::Render(Zorkish *game) {
    std::cout << "-----------------" <<std::endl;
    std::cout << "Zorkish : : About" <<std::endl;
    std::cout << "-----------------" <<std::endl;
    std::cout << "Written by Steven Hart" <<std::endl;
}