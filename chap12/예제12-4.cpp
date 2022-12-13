/*
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char *firstFile = "student.txt";
    char *secondFile = "systemini.txt";
    fstream fout(firstFile, ios::out | ios::app); // 쓰기 모드로 파일 열기
    if (!fout) {
        cout << firstFile << " 열기 오류";
        return 0;
    }

    fstream fin(secondFile, ios::in); // 읽기 모드로 파일 열기
    if (!fin) {
        cout << secondFile << " 열기 오류";
        return 0;
    }

    int c;
    while ((c = fin.get()) != EOF) { // 파일 끝까지 문자 읽기
        fout.put(c);
    }

    fin.close();
    fout.close();

}*/
