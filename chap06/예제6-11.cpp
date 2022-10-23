/*
#include <iostream>

using namespace std;

class Circle {
private:
    static int numOfCircles;
    int radius;
public:
    Circle(int r = 1);

    ~Circle() { numOfCircles--; } // 생성된 원의 개수 감소
    double getArea() { return 3.14 * radius * radius; }

    static int getNumOfCircles() { return numOfCircles; }
};

Circle::Circle(int r) {
    radius = r;
    numOfCircles++;
}

int Circle::numOfCircles = 0;

int main(){
    Circle *p = new Circle[10]; // 10개의 생성자 실행
    cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

    delete [] p; // 생성자 10개 소멸자 실행
    cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

    Circle a; // 생성자 실행
    cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

    Circle b; // 생성자 실행
    cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

}*/
