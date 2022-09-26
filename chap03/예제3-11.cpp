#include <iostream>

using namespace std;

int main_11(void) {
    char NotString[] = {'a', 'b', 'c'};
    char IsString[] = {'a', 'b', 'c', '\0'};

    // cout << NotString << endl;
    // 쓰레기 값이 뒤에 출력됨
    for (int i = 0; i < sizeof(NotString); i++) {
        cout << NotString[i];
    }
    cout << endl;

    cout << IsString << endl;
}