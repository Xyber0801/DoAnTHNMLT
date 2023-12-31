#include "utils.h"

#include "shape.h"
#include "circle.h"
#include "square.h"
#include "rectangle.h"
#include <iostream>
#include <string.h>

using namespace std;

void readInput(FILE *file, vector<Shape> &shapes) {
    // Read how many shapes is in input.txt
    int shapesNum = 0;
    fscanf(file, "%d\n", &shapesNum);
    
    for (int i = 0; i < shapesNum; i++) {
        char shapeType[20];
        fscanf(file, "%[^:]: ", shapeType);

        //Read circle
        if (strcmp(shapeType, "Circle") == 0) {
            float radius;
            fscanf(file, "r=%f\n", &radius);
            Circle circle = Circle(radius);
            shapes.push_back(circle);
        }

        //Read square
        else if (strcmp(shapeType, "Square") == 0) {
            float side;
            fscanf(file, "a=%f\n", &side);
            Square square = Square(side);
            shapes.push_back(square);
        }

        //Read rectangle
        else {
            float w, h;
            fscanf(file, "w=%f, h=%f\n", &w, &h);
            Rectangle rect = Rectangle(w, h);
            shapes.push_back(rect);
        }
    }
}

