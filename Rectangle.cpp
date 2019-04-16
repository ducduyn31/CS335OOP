//
// Created by danielng on 16/04/2019.
//

#include "Rectangle.h"

double Rectangle::getWidth() const {
    return width;
}

void Rectangle::setWidth(double newWidth) {
    Rectangle::width = newWidth;
}

double Rectangle::getHeight() const {
    return height;
}

void Rectangle::setHeight(double newHeight) {
    Rectangle::height = newHeight;
}

Rectangle::Rectangle(double width, double height) : width(width), height(height) {}

double Rectangle::getArea() const {
    return getWidth() * getHeight();
}
