/*
#include <iostream>
#include <string>

using namespace std;

// 2차원 평면에서 한 점을 표현하는 클래스 Point 선언
class Point {
    int x, y; // 한 점(x,y) 좌표값
public:
    void set(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void showPoint() { cout << "(" << x << ',' << y << ")" << endl; }
};


// 2차원 평면에서 컬러점을 표현하는 클래스 ColorPoint. Point를 상속받음
class ColorPoint : public Point {
    string color;
public:
    void setColor(string color) { this->color = color; }

    void showColorPoint();
};

void ColorPoint::showColorPoint() {
    cout << color << " : ";
    showPoint();
}

int main() {
    ColorPoint cp;
    cp.set(3, 4);
    cp.setColor("Red");
    cp.showColorPoint();
}*/
