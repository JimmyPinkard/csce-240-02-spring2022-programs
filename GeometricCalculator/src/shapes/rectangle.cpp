//
// Created by jimmy on 1/27/22.
//

#include "headers/rectangle.h"

Rectangle::Rectangle(const double length, const double width) {
    this->length = length;
    this->width = width;
    this->set_props();
}

double Rectangle::perimeter() {
    return 2 * (length + width);
}

double Rectangle::area() {
    return width * length;
}