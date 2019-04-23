//
// Created by danielng on 23/04/2019.
//
#include "FloatArray.h"

int main(int argc, char** argv) {

    FloatArray a(5);
    FloatArray b = a;

    a.display();
    b.display();

    return 0;
}