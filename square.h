#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square: public Shape {
    public:
        Square(float side);
        float side;
};

#endif