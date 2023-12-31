#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"
#include <string>

float const PI = 3.14159;

class Circle: public Shape {
    public:
        Circle(float radius);
        float radius;
};

#endif