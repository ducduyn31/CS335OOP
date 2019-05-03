//
// Created by danielng on 23/04/2019.
//

#ifndef CS335OOP_ITEM_H
#define CS335OOP_ITEM_H

#include <string>

using namespace std;

class Item {

private:
    string name;
public:
    Item(string name);

    const string &getName() const;

    void setName(const string &name);

    Item & getNewItem();

};


#endif //CS335OOP_ITEM_H
