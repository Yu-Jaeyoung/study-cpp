#include <iostream>

using namespace std;

int main_7(void) {
    char ch;
    cout << " 1. 콩나물\n";
    cout << " 2. 콩자반\n";
    cout << " 3. 종료하기\n";
    cout << "원하는 메뉴를 선택하시오 : ";
    do {
        cin >> ch;
        switch (ch) {
            case '1' :
                cout << "콩나물을 선택하셨습니다.\n";
                break;
            case '2' :
                cout << "콩자반을 선택하셨습니다.\n";
                break;
            case '3' :
                cout << "프로그램을 종료합니다.\n";
                exit(0);
            default :
                cout << "잘못 선택하셨습니다.\n";
        }
    } while (ch);
}