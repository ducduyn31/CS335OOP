#include <iostream>
#include "Rectangle.h"

using namespace std;

void assertLength(double&);


struct RoomInfo {
    char name[25];
    Rectangle *physicalInfo;
};

int main(int argc, char **args) {

    RoomInfo rooms[3];

    for (auto &room : rooms) {
        cout << "Room name:\t\t";
        cin.getline(room.name, 25);
        double width, height;
        cout << "Room Width:\t\t";
        assertLength(width);
        cout << "Room Height:\t";
        assertLength(height);
        room.physicalInfo = new Rectangle(width, height);
        cout << "=========================\n";
        cin.ignore(256, '\n');
    }

    double totalArea = 0;
    for (auto & room : rooms) totalArea += room.physicalInfo->getArea();

    cout << "Total area is:\t" << totalArea << endl;

    return 0;
}

void assertLength(double &length) {
    double temp;
    do {
        cin >> temp;
        if (temp <= 0)
            cout << "Must be > 0\n";
    } while (temp <= 0);
    length = temp;
}