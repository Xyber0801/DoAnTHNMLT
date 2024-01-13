#include "utils.h"

using namespace std;

void readInput(FILE *file, vector<Shape*> &shapes) {
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
            Circle* circle = new Circle(radius);
            shapes.push_back(circle);
        }

        //Read square
        else if (strcmp(shapeType, "Square") == 0) {
            float side;
            fscanf(file, "a=%f\n", &side);
            Square* square = new Square(side);
            shapes.push_back(square);
        }
 
        //Read rectangle
        else if (strcmp(shapeType, "Rectangle") == 0){
            float w, h;
            fscanf(file, "w=%f, h=%f\n", &w, &h);
            Rectangle* rect = new Rectangle(w, h);
            shapes.push_back(rect);
        }
    }
}

void output(vector<Shape*>& shapes) {
	int countCircle = 0;
	int countSquare = 0;
	int countRectangle = 0;
	int maxPerimeterIndex = 0;
	int minPerimeterIndex = 0;
	int maxAreaIndex = 0;
	int minAreaIndex = 0;

	//Print all shapes
	for (int i = 0; i < shapes.size(); i++) {
		cout << shapes[i]->getStrSize() << "=> area=" << shapes[i]->area << ", perimeter=" << shapes[i]->perimeter << endl;
	}
	cout << endl;

	for (int i = 0; i < shapes.size(); i++) {
		//Find the index of the min, max area and perimeter
		if (shapes[i]->area > shapes[maxAreaIndex]->area) {
			maxAreaIndex = i;
		}

		if (shapes[i]->area < shapes[minAreaIndex]->area) {
			minAreaIndex = i;
		}

		if (shapes[i]->perimeter > shapes[maxPerimeterIndex]->perimeter) {
			maxPerimeterIndex = i;
		}

		if (shapes[i]->perimeter < shapes[minPerimeterIndex]->perimeter) {
			minPerimeterIndex = i;
		}

		//Count shapes 
		if (shapes[i]->type == Type::circleShape) {
			countCircle++;
		}

		if (shapes[i]->type == Type::rectangleShape) {
			countRectangle++;
		}

		if (shapes[i]->type == Type::squareShape) {
			countSquare++;
		}
	}
	
	cout << "Hinh co chu vi lon nhat: ";
	cout << shapes[maxPerimeterIndex]->getStrSize() + " => perimeter=" << shapes[maxPerimeterIndex]->perimeter << endl;

	cout << "Hinh co dien tich lon nhat: ";
	cout << shapes[maxAreaIndex]->getStrSize() + " => area=" << shapes[maxAreaIndex]->area << endl;

	cout << "Hinh co chu vi nho nhat: ";
	cout << shapes[minPerimeterIndex]->getStrSize() << " => perimeter=" << shapes[minPerimeterIndex]->perimeter << endl;

	cout << "Hinh co dien tich nho nhat: ";
	cout << shapes[minAreaIndex]->getStrSize() << " => area=" << shapes[minAreaIndex]->area << endl;
	cout << endl;

	cout << "Thong ke cac hinh da doc\n"
		<< "+ Square: " << countSquare << endl
		<< "+ Circle: " << countCircle << endl
		<< "+ Rectangle: " << countRectangle;
}