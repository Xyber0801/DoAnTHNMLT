#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"
#include <string>

float const PI = 3.14159;

struct Circle: public Shape {
    Circle(float radius);
    float radius;
};

#endif