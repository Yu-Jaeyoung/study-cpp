#include <iostream>

using namespace std;

class Rectangle {
public:
    double width;
    double height;

    double getArea();
};

double Rectangle::getArea() {
    return width * height;
}

int main_2(void) {
    Rectangle rect;
    rect.width = 3;
    rect.height = 5;
    cout << "사각형 면적은 " << rect.getArea() << endl;
}