/*
//원의 개수를 입력 받고 Circle 배열을 동적 생성 반지름 값을 입력 받아 Circle 배열에 저장
//면적이 100에서 200 사이인 원의 개수를 출력

#include <iostream>

using namespace std;

class Circle {
    int radius;
public:
    Circle() { radius = 1; }

    Circle(int r) { radius = r; }

    void setRadius(int r) { radius = r; }

    double getArea() { return radius * radius * 3.14; }
};

int main(void) {
    int num, radius;
    cout << "생성할 원의 개수 : ";
    cin >> num;

    if (num <= 0) {
        cout << "0보다 큰 수를 입력 하시오." << endl;
        return 0;
    }


    Circle *circle = new Circle[num];
    int count = 0;

    for (int i = 0; i < num; i++) {
        cout << i + 1 << "번째 원의 반지름 길이 : ";
        cin >> radius;
        circle[i].setRadius(radius);
        if (circle[i].getArea() >= 100 && circle[i].getArea() <= 200) {
            count++;
        }
    }

    // 방법1
    for (int i = 0; i < num; i++) {
        cout << circle[i].getArea() << ' ';
    }

    cout << endl;
    Circle *p = circle;
    // 방법2
    for (int i = 0; i < num; i++) {
        cout << p->getArea() << ' ';
        p++;
    }

    cout << endl << "면적이 100에서 200사이인 원의 개수 : " << count << endl;

    delete[] circle;

}*/
