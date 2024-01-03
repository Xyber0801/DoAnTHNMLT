#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

struct Square: public Shape {
    Square(float side);
    float side;
};

#endif