/*
#include <iostream>
#include <fstream>

using namespace std;

long getFileSize(ifstream &fin) {
    fin.seekg(0, ios::end); // get pointer 를 파일의 맨 끝으로 옮김
    long length = fin.tellg(); // get pointer의 위치르르 알아냄
    return length; // length는 파일의 크기와 동일
}

int main() {
    char *file = "systemini.txt";

    ifstream fin(file);
    if (!fin) {
        cout << file << " 열기 오류 ";
        return 0;
    }

    cout << file << "의 크기는 " << getFileSize(fin);
    fin.close();
}*/
