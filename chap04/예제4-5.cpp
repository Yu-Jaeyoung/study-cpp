#include <iostream>
using namespace std;

class Circle4 {
public:
    int radius;
    Circle4();
    Circle4(int r);
    ~Circle4();
    double getArea();
};

Circle4::Circle4( ) {
    radius = 1;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle4::Circle4(int r) {
    radius = r;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle4::~Circle4() {
    cout << "반지름 " << radius << " 원 소멸" << endl;
}

double Circle4::getArea() {
    return 3.14 * radius * radius;
}

//Circle4 globalDonut(1000);
//Circle4 globalPizza(2000);

void f() {
    Circle4 fDonut(100);
    Circle4 fPizza(200);
}

int main_5(void)
{
    Circle4 mainDonut;
    Circle4 mainPizza(30);
    f();
}