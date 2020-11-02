//
// Created by Mereslann on 3/09/2019.
//

#include "Gameplay.h"
#include "World.h"



Gameplay::Gameplay(string * filename) : GameState(std::string("Gameplay")) {
    this->world = new World(filename);
    this->commandManager = new CommandManager(this->world);
}

Gameplay::~Gameplay() = default;

std::string Gameplay::Input(Zorkish *game) {
//    cout << "phase 1 commands quit and hiscore:> ";
    string dir;
    getline(cin, dir);
    return dir;
}
void Gameplay::Update(Zorkish *game, std::string input) {
    vector<string> modinput = world->Split(input);
    cout << commandManager->Execute(modinput) << endl;
    if(modinput[0] == "quit"){
        game->SetState(game->MainMenu);
    }
    else if(modinput[0] == "hiscore"){
        game->SetState(game->NewHighScore);
    }
}
void Gameplay::Render(Zorkish *game) {
    std::cout << "---------------------------------------------------------" <<std::endl;
    std::cout << "Zorkish : : Gameplay" <<std::endl;
    std::cout << "---------------------------------------------------------" <<std::endl;
    std::cout << world->player->location->name <<std::endl;
}



