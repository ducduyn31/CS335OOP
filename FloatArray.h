//
// Created by danielng on 23/04/2019.
//

#ifndef CS335OOP_FLOATARRAY_H
#define CS335OOP_FLOATARRAY_H

#include <iostream>
using namespace std;

class FloatArray {
private:
    int length;
    float *FA;
public:
    explicit FloatArray(int length);
    ~FloatArray();

    FloatArray(const FloatArray &oldObj);

    void display();
};


#endif //CS335OOP_FLOATARRAY_H
