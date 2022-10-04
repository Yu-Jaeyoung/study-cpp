#include <iostream>
using namespace std;

class Circle2 {
public:
    int radius;
    Circle2();
    Circle2(int r);
    double getArea();
};

Circle2::Circle2() {
    radius = 1;
    cout << "반지름 " << radius << " 원 생성 " << endl;
}

Circle2::Circle2(int r) {
    radius = r;
    cout << "반지름 " << radius << " 원 생성 " << endl;
}

double Circle2::getArea() {
    return 3.14 * radius * radius;
}

int main_3(void)
{
    Circle2 donut;
    double area = donut.getArea();
    cout << "donut 면적은 " << area << endl;

    Circle2 pizza(30);
    area = pizza.getArea();
    cout << "pizza 면적은 " << area << endl;
}