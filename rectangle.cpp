#include "rectangle.h"

Rectangle::Rectangle(float w, float h) {
    w = w;
    h = h;
    perimeter = 2*(w+h);
    area = w*h;
}