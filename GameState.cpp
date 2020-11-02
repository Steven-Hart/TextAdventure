//
// Created by Mereslann on 3/09/2019.
//
#include <iostream>
#include <utility>
#include "GameState.h"

GameState::GameState(std::string name) : state_name(name) {

}

GameState::~GameState() = default;

std::string GameState::Input(Zorkish * p_game) {
    std::cout << "Error in " << GetName() << "occurred in processing Input";
    return "";
}

void GameState::Update(Zorkish * p_game, std::string input) {
    std::cout << "Error in " << GetName() << "occurred in processing Update";
}

void GameState::Render(Zorkish * p_game) {
    std::cout << "Error in " << GetName() << "occurred in processing Render";
}

