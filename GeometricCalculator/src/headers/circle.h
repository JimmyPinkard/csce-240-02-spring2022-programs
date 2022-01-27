//
// Created by jimmy on 1/27/22.
//

#ifndef CSCE240_CIRCLE_H
#define CSCE240_CIRCLE_H

#include "shape.h"

const float PI = 3.14;

class circle : shape {
    double radius;
public:
    circle(const double radius);
    double perimeter() override;
    double area() override;
};


#endif //CSCE240_CIRCLE_H
