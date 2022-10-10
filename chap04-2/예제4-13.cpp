/*
//빈칸을 포함하는 문자열을 입력 받고, 한 문자씩 왼쪽으로 회전하도록 문자열을 변경하고 출력
#include <iostream>
#include <string>

using namespace std;

int main(void) {

    string str;
    cout << "문자열을 입력하시오. : ";
    getline(cin, str, '\n');

    */
/*for (int i = 0; i < str.length(); i++) {
        char x = str[0];
        for (int j = 0; j < str.length(); j++) {
            str[j] = str[j + 1];
        }
        str[str.length() - 1] = x;
        cout << str << endl;
    }*//*


    for (int i = 0; i < str.length(); i++) {
        string first = str.substr(0, 1); // 맨 앞 문자 1개를 문자열로 분리
        //substr(int pos, int n) pos 위치부터 n개의 문자를 새로운 서브스트링으로 생성, 리턴
        string sub = str.substr(1, str.length() - 1); //나머지 문자들을 문자열로 분리
        str = sub + first; //두 문자열을 연결하여 새로운 문자열로 만듬
        cout << str << endl;
    }
}*/
