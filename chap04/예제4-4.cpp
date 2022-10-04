#include <iostream>

using namespace std;

class Circle3 {
public:
    int radius;

    Circle3();

    Circle3(int r);

    ~Circle3(); // 소멸자
    double getArea();
};

Circle3::Circle3() {
    radius = 1;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle3::Circle3(int r) {
    radius = r;
    cout << "반지름 " << radius << " 원 생성" << endl;
};

Circle3::~Circle3() {
    cout << "반지름 " << radius << " 원 소멸" << endl;
}

double Circle3::getArea() {
    return 3.14 * radius * radius;
}

int main_4(void) {
    Circle3 donut;
    Circle3 pizza(30);

    return 0; // return 문이 없어도 소멸자 실행 ??
}