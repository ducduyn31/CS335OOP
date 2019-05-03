//
// Created by danielng on 23/04/2019.
//

#ifndef CS335OOP_INVENTORY_H
#define CS335OOP_INVENTORY_H

#include "InventoryItem.h"

class Inventory {
private:
    InventoryItem items[5];
public:
    Inventory(InventoryItem *items);

    const InventoryItem *getItems() const;

    Inventory getNewInventory();
};


#endif //CS335OOP_INVENTORY_H
