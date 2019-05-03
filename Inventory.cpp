//
// Created by danielng on 23/04/2019.
//

#include "Inventory.h"

const InventoryItem *Inventory::getItems() const {
    return items;
}

Inventory::Inventory(InventoryItem *items) {
    this->items = items;
}

Inventory Inventory::getNewInventory() {
    Inventory inventory;
    return Inventory(nullptr);
}
