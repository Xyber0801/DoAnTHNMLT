#include "square.h"

Square::Square(float side) {
    Square::side = side;
    perimeter = 4*side;
    area = side*side;
}