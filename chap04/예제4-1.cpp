#include <iostream>

using namespace std;

class Circle1 {
public:
    int radius;

    double getArea();
};

double Circle1::getArea() {
    return 3.14 * radius * radius;
}

int main_1(void) {
    Circle1 donut;
    donut.radius = 1;
    double area = donut.getArea();
    cout << "donut 면적은 " << area << endl;

    Circle1 pizza;
    pizza.radius = 30;
    area = pizza.getArea();
    cout << "pizza 면적은 " << area << endl;
}