#include <iostream>

using namespace std;

int main_2(void) {
    char flag;
    cin >> flag;
    switch (flag) {
        case 'k' :
            cout << "korea 파이팅!\n";
        case 'm' :
            cout << "milk\n";
        default :
            cout << "end\n";
    }
    cout << "fin";
}