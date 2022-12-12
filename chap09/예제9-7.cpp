/*
#include <iostream>

using namespace std;

class Calculator {
protected:
    int a, b;

    virtual int calc(int a, int b) = 0;

private:
    void input() {
        cout << "정수 2개를 입력하시오 >>";
        cin >> a >> b;
    }

public:
    void run() {
        input();
        cout << "계산된 값은 " << calc(a, b) << endl;
    }
};

class Adder : public Calculator {
    virtual int calc(int a, int b) {
        return a + b;
    }
};

class Subtractor : public Calculator {
    virtual int calc(int a, int b) {
        return a - b;
    }
};

int main() {
    Adder adder;
    Subtractor subtractor;
    adder.run();
    subtractor.run();
}*/
