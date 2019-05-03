#include <utility>

//
// Created by danielng on 23/04/2019.
//

#include "Player.h"

Player::Player(string name) : name(std::move(name)) {

}

const Inventory &Player::getInventory() const {
    return inventory;
}

void Player::setInventory(const Inventory &inv) {
    Player::inventory = inv;
}

const string &Player::getName() const {
    return name;
}

void Player::setName(const string &n) {
    Player::name = n;
}

