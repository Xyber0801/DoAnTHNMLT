#include "circle.h"

using namespace std;

Circle::Circle(float radius) {
    this->radius = radius;
    this->type = Type::circleShape;
    perimeter = 2 * PI * radius;
    area = PI * radius * radius;
    
}

std::string Circle::getStrSize() const {
    std::ostringstream out;
    out << "Circle r=" << radius;
    return out.str();
}