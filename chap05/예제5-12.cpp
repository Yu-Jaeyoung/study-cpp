/*
#include <iostream>
#include <string>

using namespace std;

class Person {
    char *name;
    int id;
public:
    Person(int id, char *name); // 생성자
    void changeName(char *name);

    Person(Person &person);

    void show() { cout << this->id << ',' << this->name << endl; }
};

Person::Person(int id, char *name) {
    this->id = id;
    int len = strlen(name); //name의 문자 개수
    this->name = new char[len + 1]; //this->name 문자열 공간 할당
    strcpy(this->name, name); // this->name에 name 문자열 복사
}

    Person::Person(Person &person) {
    this->id = person.id;
    int len = strlen(person.name);
    this->name = new char[len + 1];
    strcpy(this->name, person.name);
    cout << "복사 생성자 실행. 원본 객체의 이름 " << this->name << endl;
}

void Person::changeName(char *name) {
    if (strlen(name) > strlen(this->name)) {
        return;
    }
    strcpy(this->name, name);
}

void f(Person person) { // 2. 값에 의한 호출로 객체가 전달될 때, person 객체의 복사 생성자 호출
    person.changeName("dummy");
}

Person g() {
    Person mother(2, "jane");
    return mother; // 3. 함수에서 객체를 리턴할 때.mother 객체의 복사본 생성. 복사본 복사 생성자 호출
}

int main(void) {
    Person father(1, "Kitae");
    Person son = father; // 1.객체로 초기화하여 객체가 생성될 때, son 객체의 복사 생성자 호출
    f(father);
    g();
}
*/
