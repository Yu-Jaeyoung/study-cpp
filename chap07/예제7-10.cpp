/*
#include <iostream>

using namespace std;

class Power {
    int kick;
    int punch;
public:
    Power(int kick = 0, int punch = 0) {
        this->kick = kick;
        this->punch = punch;
    }

    void show();

    Power operator++(int x);
};

void Power::show() {
    cout << "kick = " << kick << ',' << "power = " << punch << endl;
}

Power Power::operator++(int x) { // 후위 이므로 멤버 변수 값 증가 되었지만, 출력은 이전 상태가 나온다.
    Power tmp = *this; // 증가 이전 상태의 멤버 변수 저장
    kick++;
    punch++;
    return tmp; // 증가 이전 객체 상태 리턴
}

int main() {
    Power a(3, 5), b;
    a.show();
    b.show();
    b = a++;
    a.show();
    b.show();
}*/
