//
// Created by danielng on 23/04/2019.
//

#ifndef CS335OOP_INVENTORYITEM_H
#define CS335OOP_INVENTORYITEM_H

#include "Item.h"

enum InventorySlot {
    ZERO, ONE, TWO, THREE, FOUR
};

class InventoryItem {

private:
    Item itemType;
    int slot;
public:
    const Item &getItemType() const;

    void setItemType(const Item &itemType);

    int getSlot() const;

    void setSlot(InventorySlot slot);

};


#endif //CS335OOP_INVENTORYITEM_H
