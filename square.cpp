#include "square.h"

Square::Square(float side) {
    this->side = side;
    this->type = Type::squareShape;
    perimeter = 4*side;
    area = side*side;
}

std::string Square::getStrSize() const {
    std::ostringstream out;
    out << "Square a=" << side;
    return out.str();
}