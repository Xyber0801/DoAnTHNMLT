#include "rectangle.h"

Rectangle::Rectangle(float w, float h) {
    this->w = w;
    this->h = h;
    this->type = Type::rectangleShape;
    perimeter = 2*(w+h);
    area = w*h;
}

std::string Rectangle::getStrSize() const {
    std::ostringstream out;
    out << "Rectangle w=" << w << ", h=" << h;
    return out.str();
}