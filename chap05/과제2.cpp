/*
#include <iostream>
#include <cstring>

using namespace std;

class Book {
    char *title;
    int price;
public:
    Book(char *title, int price);

    ~Book();

    void set(char *title, int price);

    void show() { cout << title << ',' << price << "원" << endl; }
};

Book::Book(char *title, int price) {
    this->price = price;
    int len = strlen(title);
    this->title = new char;//[len + 1];
    strcpy(this->title, title);
}

Book::~Book() {
    if (title)
        delete[] title;
}

void Book::set(char *title, int price) {
    this->price = price;
    if (strlen(title) > strlen(this->title))
        return;
    strcpy(this->title,title);
}

int main(void) {
    cout << sizeof("명품C++") << endl;
    cout << sizeof("명품자바") << endl;

    Book cpp("명품C++", 10000);
    Book java = cpp;
    java.set("명품자바", 12000);
    cpp.show();
    java.show();
}*/
