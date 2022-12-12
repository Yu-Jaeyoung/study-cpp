/*
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> sv; // 문자열 벡터 생성
    string name;

    cout << "이름을 5개 입력하라 " << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << " >> ";
        getline(cin, name);
        sv.push_back(name);
    }
    name = sv.at(0);
    for (int i = 1; i < sv.size(); i++) {
        if (name < sv[i]) // sv[i]의 문자열이 name보다 사전에서 뒤에 나올 경우
            name = sv[i]; // name을 sv[i]의 문자열로 변경
    }
    cout << "사전에서 가장 뒤에 나오는 이름은 " << name << endl;
}*/
