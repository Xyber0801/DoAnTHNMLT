#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

struct Square: public Shape {
    Square(float side);
    float side;
    std::string getStrSize() const override;
};

#endif