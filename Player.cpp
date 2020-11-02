//
// Created by Mereslann on 9/09/2019.
//

#include "Player.h"

Player::Player() = default;
Player::~Player() = default;

Inventory PlayerInventory;

void Player::Move(Location * newLocation) {
    location = newLocation;
}

void Player::DisplayName() {
    std::cout << name << ' ';
}
