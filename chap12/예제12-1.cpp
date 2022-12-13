/*
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char name[10], dept[20];
    int sid;

    // 키보드로부터 읽기
    cout << "이름 >> ";
    cin >> name; // 키보드에 이름 입력 받음
    cout <<"학번 >> ";
    cin >> sid; // 키보드에 학번 입력 받음
    cout <<"학과 >> ";
    cin >> dept;

    //파일 열기. student.txt 파일을 열고, 출력 스트림 생성
    ofstream fout("student.txt");
    if(!fout) { // 열기 실패 검사
        cout << "student.txt 파일을 열 수 없다.";
        return 0;
    }

    // 파일 쓰기
    fout << name << endl;
    fout << sid << endl;
    fout << dept << endl;

    fout.close();
}
*/
