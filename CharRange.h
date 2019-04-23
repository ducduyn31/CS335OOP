//
// Created by danielng on 23/04/2019.
//

#ifndef CS335OOP_CHARRANGE_H
#define CS335OOP_CHARRANGE_H

#include <iostream>

using namespace std;

class CharRange {
private:
    char input, lowest, highest;
    char * errMessage;
public:
    CharRange(char input, char lowest, char highest, char* errMsg);
    ~CharRange();

    char getInput() const;

    void setInput(char input);

    char getLowest() const;

    void setLowest(char lowest);

    char getHighest() const;

    void setHighest(char highest);

    char *getErrMessage() const;

    void setErrMessage(char *errMessage);

    void assert();

};


#endif //CS335OOP_CHARRANGE_H
