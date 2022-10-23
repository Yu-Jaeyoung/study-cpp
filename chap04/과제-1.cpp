/*
#include <iostream>

using namespace std;

class Rectangle {
public:
    double width;
    double height;

    bool isSquare();

    Rectangle();

    Rectangle(double x);

    Rectangle(double x, double y);
};

Rectangle::Rectangle() {
    width = 1.0;
    height = 1.0;
}

Rectangle::Rectangle(double x) {
    width = x;
    height = x;
}

Rectangle::Rectangle(double x, double y) {
    width = x;
    height = y;
}

bool Rectangle::isSquare() {
    return (width == height);
}

int main() {
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3);

    if (rect1.isSquare())
        cout << "rect1은 정사각형이다." << endl;
    if (rect2.isSquare())
        cout << "rect2은 정사각형이다." << endl;
    if (rect3.isSquare())
        cout << "rect3은 정사각형이다." << endl;
}
*/
