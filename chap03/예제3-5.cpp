#include <iostream>

using namespace std;

int main_5(void) {
    int a = 1, sum = 0;
    while (a <= 10) {
        sum += a++;
    }
    cout << "1 + 2 + 3 + ... + 10 = " << sum << endl;
}