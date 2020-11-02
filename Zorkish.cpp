//
// Created by Mereslann on 3/09/2019.
//
#include <iostream>
#include <utility>

#include "Zorkish.h"

Zorkish::Zorkish() : p_current_state(new class MainMenu()) {

}

Zorkish::~Zorkish() {
    delete p_current_state;
}

std::string Zorkish::Input() {
    std::string input = p_current_state->Input(this);
    return input;
}

void Zorkish::Update() {
    p_current_state->Update(this, Input());
}

void Zorkish::Render() {
    p_current_state->Render(this);
}

 void Zorkish::SetState(Zorkish::State state) {
//    std::cout<< "changing from " << p_current_state->GetName() << " to ";
    delete p_current_state;
    switch(state){
        case MainMenu:
            p_current_state = new class MainMenu();
            break;
        case About:
            p_current_state = new class About();
            break;
        case Help:
            p_current_state = new class Help();
            break;
        case SelectAdventure:
            p_current_state = new class SelectAdventure();
            break;
        case GamePlay:
//            p_current_state = new class Gameplay();
            break;
        case NewHighScore:
            p_current_state = new class NewHighScore();
            break;
        case ViewHallOfFame:
            p_current_state = new class ViewHallOfFame();
            break;
    }
//    std::cout << p_current_state->GetName() << "state"<<std::endl;
}

void Zorkish::SetGameOver() {
    gameover = true;
}

bool Zorkish::GetGameOver() {
    return gameover;
}

void Zorkish::LoadFile(Zorkish::State state, string filename) {
    delete p_current_state;
    p_current_state = new class Gameplay(&filename);
}


