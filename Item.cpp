#include <utility>

//
// Created by danielng on 23/04/2019.
//

#include "Item.h"

const string &Item::getName() const {
    return name;
}

void Item::setName(const string &n) {
    Item::name = n;
}
