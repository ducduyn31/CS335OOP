//
// Created by danielng on 23/04/2019.
//

#include "FloatArray.h"

FloatArray::FloatArray(int length) {
    cout << "Init at "<< this << endl;
    this->length = length;
    this->FA = new float[length];

    for (int j = 0; j < length; ++j) {
        this->FA[j] = 0.1f * j;
    }
}

FloatArray::~FloatArray() {
    cout << "\nDeleting Float Array" << endl;
    delete this->FA;
    cout << "Deleted" << endl;
}

FloatArray::FloatArray(const FloatArray &oldObj) {
    cout << "Copy from " << &oldObj << " to " << this << endl;
    this->length = oldObj.length;
    this->FA = new float[length];
    for (int j = 0; j < this->length; ++j) {
        this->FA[j] = oldObj.FA[j];
        cout << "Copy from " << &oldObj.FA[j] << " to " << &this->FA[j] << endl;
    }
}

void FloatArray::display() {
    cout << "\nNumber of elements: " << this->length << endl;
    cout << "Float array: ";

    for (int i = 0; i < this->length; ++i) {
        cout << this->FA[i] << ", ";
    }
    cout << endl;

}
