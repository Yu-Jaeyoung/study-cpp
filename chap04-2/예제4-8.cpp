/*
#include <iostream>

using namespace std;

class Circle {
    int radius;
public:
    Circle();

    Circle(int r);

    ~Circle();

    void setRadius(int r) { radius = r; }

    double getArea() { return 3.14 * radius * radius; };
};

Circle::Circle() {
    radius = 1;
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
    radius = r;
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
    cout << "소멸자 실행 radius = " << radius << endl;
}

int main(void) {

    int radius;
    while (true) {

        cout << "반지름 : ";
        cin >> radius;

        if (radius <= 0) break;

        Circle *circle = new Circle(radius);

        cout << "원의 면적은 : " << circle->getArea() << endl;

        delete circle;
    }
}
*/
