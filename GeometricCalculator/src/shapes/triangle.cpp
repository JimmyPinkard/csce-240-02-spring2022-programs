//
// Created by jimmy on 1/27/22.
//
#include <cmath>
#include "headers/triangle.h"

Triangle::Triangle(const double one, const double two, const double three) {
    this->one = one;
    this->two = two;
    this->three = three;
    this->set_props();
}

double Triangle::perimeter() {
    return one + two + three;
}

double Triangle::area() {
    double s = this->perimeter_prop / 2;
    return sqrt(s * (s - one) * (s - two) * (s - three));
}