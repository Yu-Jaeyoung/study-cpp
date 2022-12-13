/*
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // 스트림 객체 생성 및 파일 열기
    ifstream fin;
    fin.open("student.txt");
    if(!fin){
        cout <<"파일을 열 수 없다.";
        return 0;
    }

    char name[10],dept[20];
    int sid;

    //파일 읽기
    fin >> name;
    fin >> sid;
    fin >> dept;

    // 읽은 텍스트를 화면에 출력
    cout << name << endl;
    cout << sid << endl;
    cout << dept << endl;

    fin.close(); // 파일 읽기를 마치고 파일을 닫는다.
}
*/
