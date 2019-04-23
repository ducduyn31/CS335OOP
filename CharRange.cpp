//
// Created by danielng on 23/04/2019.
//

#include "CharRange.h"

CharRange::CharRange(char input, char lowest, char highest, char *errMsg) {
    this->setLowest(lowest);
    this->setHighest(highest);
    this->setInput(input);
    this->setErrMessage(errMsg);
}

CharRange::~CharRange() {
    this->setLowest(0);
    this->setHighest(0);
    this->setInput(0);
    delete this->errMessage;
}

char CharRange::getInput() const {
    return input;
}

void CharRange::setInput(char c) {
    CharRange::input = c;
}

char CharRange::getLowest() const {
    return lowest;
}

void CharRange::setLowest(char c) {
    CharRange::lowest = c;
}

char CharRange::getHighest() const {
    return highest;
}

void CharRange::setHighest(char c) {
    CharRange::highest = c;
}

char *CharRange::getErrMessage() const {
    return errMessage;
}

void CharRange::setErrMessage(char *c) {
    CharRange::errMessage = c;
}

void CharRange::assert() {
    if (this->getInput() > this->getHighest() || this->getInput() < this->getLowest())
        cout << this->getErrMessage() << endl;
    cout << "OK" << endl;
}
