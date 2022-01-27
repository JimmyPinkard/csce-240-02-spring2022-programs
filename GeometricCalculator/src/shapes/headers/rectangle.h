//
// Created by jimmy on 1/27/22.
//

#ifndef CSCE240_RECTANGLE_H
#define CSCE240_RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(const double length, const double width);
    double perimeter() override;
    double area() override;
};

#endif //CSCE240_RECTANGLE_H
