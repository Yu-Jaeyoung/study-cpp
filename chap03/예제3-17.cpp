/*
#include <iostream>

using namespace std;

int main(void) {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = &array[5];

    cout << " p = " << p << endl;    // p에 담긴 주소값 출력
    cout << " &array[5] = " << &array[5] << endl;    // array[5]의 주소값 출력
    p++;    // p의 값 증가 ( int 형 주소를 담고 있으므로 '4'만큼 증가
    cout << " p = " << p << endl;    // 기존 주소값에서 '4'만큼 증가된 주소값 출력
    cout << " &array[6] = " << &array[6] << endl;    // array[6]의 주소값 출력 = p 와 같음

    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << *p++ << endl;    // array[6]의 값 (7) 출력 후 주소값 '4' 증가
    cout << (*p)++ << endl;    // array[7]의 값 (8) 출력 후 자료값 '1' 증가
    cout << *p++ << endl; // 9 출력

    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    // 1 2 3 4 5 6 7 9 9 10 출력
}*/
