#include <iostream>

using namespace std;

int main_8(void) {
    int i, j, k = 0;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (k == 0) continue;
            cout << "안녕하세요?\n";
        }
        cout << " i = " << i << " j = " << j << endl;
    }
}