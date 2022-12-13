/*
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // 소스 파일과 목적 파일의 이름
    char *srcFile = "desert.jpg";
    char *destFile = "copydesert_get.jpg";

    // 소스 파일 열기
    ifstream fsrc(srcFile, ios::in | ios::binary);
    if (!fsrc) {
        cout << srcFile << " 열기 오류" << endl;
        return 0;
    }

    // 목적 파일 열기
    ofstream fdest(destFile, ios::out | ios::binary);
    if (!fdest) {
        cout << destFile << " 열기 오류 " << endl;
        return 0;
    }

    // 소스 파일에서 목적 파일로 복사하기
    char buf[1024];

    while (!fsrc.eof()) { // 소스 파일을 끝까지 한 바이트씩 읽는다.
        fsrc.read(buf, 1024);
        int n = fsrc.gcount();
        fdest.write(buf, n);
    }

    cout << srcFile << "을 " << destFile << "로 복사 완료" << endl;
    fsrc.close();
    fdest.close();
}
*/
