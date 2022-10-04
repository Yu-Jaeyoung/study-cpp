#include <iostream>

using namespace std;

class Tower {
public:
    int height;

    Tower();

    Tower(int x);

    int getHeight();
};

int Tower::getHeight() {
    return height;
}

Tower::Tower() {
    height = 1;
}

Tower::Tower(int x) {
    height = x;
}

int main(void) {
    Tower myTower;
    Tower seoulTower(100);
    cout << "높이는 " << myTower.getHeight() << "미터" << endl;
    cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}