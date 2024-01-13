#ifndef SHAPE_H
#define SHAPE_H

#include "type.h"
#include "string"
#include <sstream>

struct Shape {
    Type type;
    float perimeter;
    float area;
    virtual std::string getStrSize() const = 0;
};

#endif