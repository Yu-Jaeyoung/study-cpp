/*
#include <iostream>
#include <string>

using namespace std;

class Person {
    char *name;
    int id;
public:
    Person(int id, char *name); // 생성자
    ~Person(); // 소멸자
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
    this->name= new char[len+1];
    strcpy(this->name, person.name);
    cout << "복사 생성자 실행. 원본 객체의 이름 " << this->name << endl;
}

Person::~Person() {
    if (name) // 만일 name에 동적 할당된 배열이 있으면
        delete[] name;
}

void Person::changeName(char *name) {
    if (strlen(name) > strlen(this->name)) {
        return;
    }
    strcpy(this->name, name);
}

int main(void) {
    Person father(1, "Kitae");
    Person daughter(father);

    cout << "daughter 객체 생성 직후 ----" << endl;
    father.show();
    daughter.show();

    daughter.changeName("Grace");
    cout << "daughter 이름을 Grace로 변경한 후 ---- " << endl;
    father.show();
    daughter.show();

    return 0;
}
*/
