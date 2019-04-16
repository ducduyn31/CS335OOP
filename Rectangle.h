#ifndef CS335OOP_RECTANGLE_H
#define CS335OOP_RECTANGLE_H

#include <math.h>

class Rectangle {
private:
    double width, height;
public:
    Rectangle(double width, double height);

    double getWidth() const;

    void setWidth(double newWidth);

    double getHeight() const;

    void setHeight(double newHeight);

    double getArea() const;

    bool isLargerThan(Rectangle *otherRectangle) const;
};


#endif //CS335OOP_RECTANGLE_H
