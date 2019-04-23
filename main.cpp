//
// Created by danielng on 23/04/2019.
//

#include "CharRange.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    char input, highest, lowest;
    char *errMessage = new char[200];
    bool cont = false;

    cout << "Enter lowest: ";
    cin >> lowest;
    cout << "Enter highest: ";
    cin >> highest;
    cin.ignore(256, '\n');
    cout << "Enter errMessage: ";
    cin.getline(errMessage, 256);

    CharRange charRange(0, lowest, highest, errMessage);

    do {
        cout << "Enter your input: ";
        cin >> input;
        charRange.setInput(input);
        charRange.assert();

        cout << "Do you want to continue? (0/1) ";
        cin >> cont;

    } while (cont);
    return 0;
}