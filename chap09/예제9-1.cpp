/*
#include <iostream>

using namespace std;

class Base {
public:
    void f() { cout << "Base::f() called " << endl; }
};

class Derived : public Base {
public:
    void f() { cout << "Derived::f() called " << endl; }
};

int main() {
    Derived d, *pDer;
    pDer = &d; // 객체 d를 가리키는 포인터 pDer
    pDer->f();

    Base *pBase;
    pBase = pDer; // 업캐스팅. 객체 d를 가리키는 포인터 pBase
    pBase->f(); // Base의 멤버 f() 호출
}*/
