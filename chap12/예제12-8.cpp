/*
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char *file = "systemini.txt";
    ifstream fin;
    fin.open(file, ios::in | ios::binary);
    if (!fin) { // 열기 실패 검사
        cout << "파일 열기 오류" << endl;
        return 0;
    }

    int count = 0;
    char s[32];
    while (!fin.eof()) { // 파일 끝까지 읽는다.
        fin.read(s, 32); // 최대 32 바이트를 읽어 배열 s에 저장
        int n = fin.gcount(); // 실제 읽은 바이트 수 알아냄
        cout.write(s, n);
        count += n;
    }

    cout << " 읽은 바이트 수는" << count << endl;
    fin.close(); // 입력 파일 닫기
}*/
