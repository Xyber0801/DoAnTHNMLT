#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

struct Rectangle: public Shape {
    Rectangle(float w, float h);
    
    public:
        float w;
        float h;
        std::string getStrSize() const override;
};

#endif