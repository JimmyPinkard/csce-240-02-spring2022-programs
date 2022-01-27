//
// Created by jimmy on 1/27/22.
//

#ifndef CSCE240_SHAPE_H
#define CSCE240_SHAPE_H

#include <string>

class Shape {
protected:
    double perimeter_prop, area_prop;
    void set_props();
public:
    virtual ~Shape();
    virtual double perimeter() = 0;
    virtual double area() = 0;
    virtual std::string to_string();
};

#endif //CSCE240_SHAPE_H