//
// Created by danielng on 23/04/2019.
//

#include "InventoryItem.h"

const Item &InventoryItem::getItemType() const {
    return itemType;
}

void InventoryItem::setItemType(const Item &it) {
    InventoryItem::itemType = it;
}

int InventoryItem::getSlot() const {
    return slot;
}

void InventoryItem::setSlot(InventorySlot s) {
    InventoryItem::slot = s;
}
