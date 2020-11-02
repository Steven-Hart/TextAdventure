//
// Created by Mereslann on 3/09/2019.
//
#include <iostream>
#include "MainMenu.h"


MainMenu::MainMenu() : GameState(std::string("MainMenu")) {

}

MainMenu::~MainMenu() {}

std::string MainMenu::Input(Zorkish *game) {
    std::cout << "Select 1-5 :> ";
    std::string dir;
    getline(cin, dir);
    return dir;
}
void MainMenu::Update(Zorkish *game, std::string input) {
    if(input == "1"){
        game->SetState(game->SelectAdventure);
    }
    else if(input == "2"){
        game->SetState(game->ViewHallOfFame);
    }
    else if(input == "3"){
        game->SetState(game->Help);
    }
    else if(input == "4"){
        game->SetState(game->About);
    }
    else if(input == "5"){
        game->SetGameOver();
    }



}
void MainMenu::Render(Zorkish *game) {
    std::cout << "---------------------------------------------------------" <<std::endl;
    std::cout << "Zorkish : : Main Menu" <<std::endl;
    std::cout << "Welcome to Zorkish Adventures" <<std::endl;
    std::cout << "---------------------------------------------------------" <<std::endl;
    std::cout << "1. Select Adventure and Play" <<std::endl;
    std::cout << "2. Hall of Fame" <<std::endl;
    std::cout << "3. Help" <<std::endl;
    std::cout << "4. About" <<std::endl;
    std::cout << "5. Quit" <<std::endl;
}