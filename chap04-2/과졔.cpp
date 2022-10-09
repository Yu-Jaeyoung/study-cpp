#include <iostream>

using namespace std;

#define NUM 3

class Person {
    string name;
    string tel;
public:
    Person();

    string getName() { return name; }

    string getTel() { return tel; }

    void set(string name, string tel);
};

int main(void) {

    cout << "이름과 전화번호를 입력해주세요." ;


}