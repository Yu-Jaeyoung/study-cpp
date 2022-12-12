/*
// b = a = 2;

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

    Power operator+(int plus);
};

void Power::show() {
    cout << "kick = " << kick << ',' << "punch = " << punch << endl;
}

Power Power::operator+(int plus) {
    Power tmp;
    tmp.kick = this->kick + plus;
    tmp.punch = this->punch + plus;
    return tmp;
}

int main() {
    Power a(3, 5), b;
    a.show();
    b.show();
    b = a + 2;
    a.show();
    b.show();
}*/
