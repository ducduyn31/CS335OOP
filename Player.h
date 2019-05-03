//
// Created by danielng on 23/04/2019.
//

#ifndef CS335OOP_PLAYER_H
#define CS335OOP_PLAYER_H

#include <string>

#include "Inventory.h"

using namespace std;

class Player {
private:
    string name;
    Inventory inventory;
public:
    explicit Player(string name);

    const string &getName() const;

    void setName(const string &name);

    const Inventory &getInventory() const;

    void setInventory(const Inventory &inventory);
};


#endif //CS335OOP_PLAYER_H
