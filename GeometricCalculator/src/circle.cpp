//
// Created by jimmy on 1/27/22.
//
#include "headers/circle.h"

circle::circle(const double radius) {
    this->radius = radius;
}

double circle::perimeter() {
    return radius * PI;
}

double circle::area() {
    return radius * radius * PI;
}