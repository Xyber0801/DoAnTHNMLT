#ifndef UTILS_H
#define UTILS_H

#include <fstream>
#include <vector>
#include "shape.h"
#include "type.h"
#include "circle.h"
#include "square.h"
#include "rectangle.h"
#include <iostream>
#include <string.h>

void readInput(FILE *file, std::vector<Shape*> &shapes);
void output(std::vector<Shape*> &shapes);

#endif