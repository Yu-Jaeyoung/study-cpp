#include <iostream>
#include <string>

using namespace std;

class Person {
    string name;
    string tel;
public:
    Person(); //기본 생성자를 직업 선언

    string getName() { return name; }

    string getTel() { return tel; }

    void set(string name, string tel);
};

Person::Person() {}; //생성자 호출을 필수. 미호출 시 오류 발생

void Person::set(string name, string tel) {
    this->name = name;
    this->tel = tel;
}

int main(void) {

    Person person[3];
    string str, search;

    cout << "이름과 전화 번호를 입력해 주세요." << endl;
    for (int i = 0; i < 3; i++) {
        cout << "사람 " << i + 1 << ">> ";
        getline(cin, str, '\n');
        int index = str.find(' ');
        string name = str.substr(0, index); // 0부터 index개의 문자 리턴
        string tel = str.substr(index + 1); // index+1부터 끝까지 리턴
        if (tel[0] != '0') {
            cout << "전화 번호는 0으로 시작해야 합니다. 다시 진행 해주세요." << endl;
            return 0;
        } // 전화 번호 시작이 틀릴시 예외 처리 진행
        person[i].set(name, tel);
    }

    cout << "모든 사람의 이름은 ";
    for (int i = 0; i < 3; i++) {
        cout << person[i].getName() << ' ';
    }

    cout << endl << "전화 번호를 검색합니다. 이름을 입력하세요. >> ";
    cin >> search;
    for (int i = 0; i < 3; i++) {
        if (person[i].getName() == search) {
            cout << "전화 번호는 " << person[i].getTel();
        }
    }
}
