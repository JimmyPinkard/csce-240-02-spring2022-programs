//
// Created by jimmy on 1/27/22.
//

#include "headers/shape.h"

Shape::~Shape(){}

void Shape::set_props()
{
    this->perimeter_prop = perimeter();
    this->area_prop = area();
}

std::string Shape::to_string() {
    return "{Area: " + std::to_string(this->area_prop) + ", Perimeter: " + std::to_string(this->perimeter_prop) + "}";
}