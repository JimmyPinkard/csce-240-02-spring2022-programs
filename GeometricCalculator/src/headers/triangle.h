//
// Created by jimmy on 1/27/22.
//

#ifndef CSCE240_TRIANGLE_H
#define CSCE240_TRIANGLE_H

#include "shape.h"

class triangle : shape {
    double one, two, three;
public:
    triangle(const double one, const double two, const double three);
    double perimeter() override;
    double area() override;
};


#endif //CSCE240_TRIANGLE_H
