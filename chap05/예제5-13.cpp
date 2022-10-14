/*
#include <iostream>
#include <string>
using namespace std;


class Person { // Person 클래스 선언
    string name;
    int id;
public:
    Person(int id, string name); // 생성자
    ~Person(); // 소멸자
    void changeName(string name);
    void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, string name) { // 생성자
    this->id = id;
    this->name = name; // name에 문자열 복사
}

Person::~Person() {// 소멸자

}

void Person::changeName(string name) { // 이름 변경
    if (name > this->name)
        return;
    this->name = name;
}

int main() {
    Person father(1, "Kitae");			// (1) father 객체 생성
    Person daughter(father);			// (2) daughter 객체 복사 생성. 복사생성자호출

    cout << "daughter 객체 생성 직후 ----" << endl;
    father.show();						// (3) father 객체 출력
    daughter.show();					// (3) daughter 객체 출력

    daughter.changeName("Graceeeeeeeee"); // (4) daughter의 이름을 "Grace"로 변경
    cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
    father.show();						// (5) father 객체 출력
    daughter.show();					// (5) daughter 객체 출력

    return 0;								// (6), (7) daughter, father 객체 소멸
}*/
