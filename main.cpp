#include <iostream>

using namespace std;

#include "Rectangle.h"

int main(int argc, char **args) {

    double width, height;
    cout << "This program will calculate the area of a\n"
         << "rectangle. What is the width? ";
    cin >> width;
    cout << "What is the height? ";
    cin >> height;

    auto *r = new Rectangle(width, height);

    cout << "Here is the rectangle's data:\n";
    cout << "Width: " << r->getWidth() << endl;
    cout << "Height: " << r->getHeight() << endl;
    cout << "Area: " << r->getArea() << endl;

    return 0;
}
