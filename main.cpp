#include <iostream>

using namespace std;

#include "Rectangle.h"

int main(int argc, char **args) {

    Rectangle *rec1 = new Rectangle(20, 3);
    Rectangle *rec2 = new Rectangle(30, 1);

    cout << rec1->getArea() << endl;
    cout << rec2->getArea() << endl;

    return 0;
}
