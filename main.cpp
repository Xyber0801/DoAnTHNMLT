#include "shape.h"
#include "circle.h"
#include "rectangle.h"
#include "square.h"
#include "utils.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    vector<Shape> shapes;

    FILE *pFile = fopen("./input.txt", "r");
    if (pFile == nullptr) {
        cout << "Unable to open input file";
        return 0;
    }
    cout << "Input file opened" << endl;
    readInput(pFile, shapes);
}