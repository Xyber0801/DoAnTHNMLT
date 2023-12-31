#include "circle.h"

using namespace std;

Circle::Circle(float radius) {
    radius = radius;
    perimeter = 2 * PI * radius;
    area = PI * radius * radius;
}

float getPerimeter(const Circle &circle) {
    return 2*PI*circle.radius;
}

float getArea(const Circle &circle) {
    return PI*circle.radius*circle.radius;
}

std::string strPerimeter(const Circle &circle) {
    return "perimeter=" + to_string(getPerimeter(circle));
}

std::string strArea(const Circle &circle) {
    return "area=" + to_string(getArea(circle));
}

std::string getInfo(const Circle &circle) {
    return "Circle r=" + to_string(circle.radius) + " => " + strArea(circle) + ", " + strPerimeter(circle); 
}