/*
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("systemini.txt");
    if (!fin) {
        cout << "파일 열기 실패 ";
        return 0;
    }

    char buf[81]; // 한 라인이 최대 80개의 문자로 구성된다고 가정
    while (true) {
        fin.getline(buf, 81); // 한 라인이 최대 80개의 문자로 구성
        if (fin.eof()) break; // 읽기 종료
        cout << buf << endl; // 라인 출력
    }

    fin.close();
}*/
