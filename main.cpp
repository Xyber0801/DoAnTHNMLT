#include "shape.h"
#include "type.h"
#include "circle.h"
#include "rectangle.h"
#include "square.h"
#include "utils.h"
#include <iostream>
#include <fstream>
#include <vector>


using namespace std;

int main() {
    vector<Shape*> shapes;
    FILE *pFile = fopen("./input.txt", "r");

    if (pFile == NULL) {
        cout << "Unable to open input file!";
        return 1;
    }

    readInput(pFile, shapes);
    
    output(shapes);

    //Free up memory 
    for (Shape* shape: shapes) {
        delete(shape);
    }

    return 0;
}