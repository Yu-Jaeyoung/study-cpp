/*
#include <iostream>

using namespace std;

class Point {
    int x, y;
public:
    Point(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }

    friend istream &operator>>(istream &ins, Point &a); // friend 선언, 참조 선언 필수
    friend ostream &operator<<(ostream &stream, Point a); // friend 선언
};

istream &operator>>(istream &ins, Point &a) { // 연산자 함수
    cout << "x 좌표>>";
    ins >> a.x;
    cout << "y 좌표>>";
    ins >> a.y;
    return ins;
}

ostream &operator<<(ostream &stream, Point a) {
    stream << "(" << a.x << ',' << a.y << ")";
    return stream;
}

int main() {
    Point p; //Point 객체 생성
    cin >> p;
    cout << p;

}*/
