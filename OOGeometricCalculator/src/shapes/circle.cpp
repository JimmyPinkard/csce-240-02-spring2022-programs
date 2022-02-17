//
// Created by jimmy on 1/27/22.
//
#include "headers/circle.h"

Circle::Circle(const double radius) {
    this->radius = radius;
    this->set_props();
}

double Circle::perimeter() {
    return 2 * radius * PI;
}

double Circle::area() {
    return radius * radius * PI;
}

std::string Circle::to_string() {
    return "{Area: " + std::to_string(this->area_prop) + ", Circumference: " + std::to_string(this->perimeter_prop) + "}";
}