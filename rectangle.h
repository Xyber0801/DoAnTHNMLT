#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle: public Shape {
    public:
        Rectangle(float w, float h);
        float w, h;
};

#endif