//
// Created by jimmy on 1/27/22.
//

#ifndef CSCE240_CIRCLE_H
#define CSCE240_CIRCLE_H

#include "shape.h"

const static double PI = 3.14;

class Circle : public Shape {
private:
    double radius;
public:
    Circle(const double radius);
    double perimeter() override;
    double area() override;
    std::string to_string() override;
};


#endif //CSCE240_CIRCLE_H
