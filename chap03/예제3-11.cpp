/*
#include <iostream>

using namespace std;

int main(void) {
    char NotString[] = {'a', 'b', 'c'};
    char IsString[] = {'a', 'b', 'c', '\0'};

    cout << NotString << endl;
    cout << IsString << endl;
    // 쓰레기 값이 뒤에 출력됨

    for (int i = 0; i < sizeof(NotString); i++) {
        cout << NotString[i];
    }

}
*/
