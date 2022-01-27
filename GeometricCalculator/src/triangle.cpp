//
// Created by jimmy on 1/27/22.
//

#include "headers/triangle.h"

triangle::triangle(const double one, const double two, const double three) {
    this->one = one;
    this->two = two;
    this->three = three;
}

double triangle::perimeter() {
    return one + two + three;
}

double triangle::area() {
    return -1;
}