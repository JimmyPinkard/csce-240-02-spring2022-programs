//
// Created by jimmy on 1/27/22.
//

#include "headers/rectangle.h"

rectangle::rectangle(const double length, const double width) {
    this->length = length;
    this->width = width;
}

double rectangle::perimeter() {
    return 2 * (length + width);
}

double rectangle::area() {
    return width * length;
}