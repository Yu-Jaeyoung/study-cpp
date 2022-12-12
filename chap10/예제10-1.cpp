/*
#include <iostream>

using namespace std;

class Circle {
    int radius;
public:
    Circle(int radius = 1) { this->radius = radius; }

    int getRadius() { return radius; }
};

template<class T>
void myswap(T &a, T &b) {
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int a = 4, b = 5;
    myswap(a, b);
    cout << "a=" << a << ',' << "b=" << b << endl;

    double c = 0.3, d = 0.3;
    myswap(a, b);
    cout << "c=" << c << ',' << "d=" << d << endl;

    Circle donut(5), pizza(20);
    myswap(donut, pizza);
    cout << "dounut 반지름 = " << donut.getRadius() << ',';
    cout << "pizza 반지름 = " << pizza.getRadius() << endl;
}*/
