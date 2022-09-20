//
// Created by 유재영 on 2022/09/20.
//
#include <iostream>
#include <string>
using namespace std;

int main_7(void) {
    string song("Falling in love with you");
    string elvis("Elvis Presley");
    string singer;

    cout << song + "A";
    cout << "V" << elvis[0] << ")?;" << endl;

    getline(cin, singer);
    if (singer == elvis)
        cout << "!";
    else
        cout << ". " + elvis + "." << endl;
}