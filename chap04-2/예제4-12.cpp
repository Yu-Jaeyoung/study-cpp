/*
#include <iostream>
#include <string>

using namespace std;

int main(void) {

    string name[5];
    for (int i = 0; i < 5; i++) {
        cout << "이름을 입력하시오 : ";
        getline(cin, name[i], '\n');
        //cin >> name[i]; //spacebar 처리 불가
    }

    string latter = name[0];

    for (int i = 0; i < 5; i++) {
        if (latter < name[i]) {
            latter = name[i];
        }
    }

    cout << "사전 가장 뒤에 오는 이름은 " << latter << " 입니다." << endl;

}*/
