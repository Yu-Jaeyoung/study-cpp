
#include <iostream>

using namespace std;
struct student {
    int stdnum;
    char name[20];
    float score;
} Student[10];

int main(void) {

    for (int i = 0; i < 10; i++) {
        cout << " 학번을 입력하시오. : ";
        cin >> Student[i].stdnum;
        cout << " 이름을 입력하시오. : ";
        cin >> Student[i].name;
        cout << " 성적을 입력하시오. : ";
        cin >> Student[i].score;
        cout << "-------------------" << endl;
    }

    float sum, avg = 0;
    for (int i = 0; i < 10; i++) {
        sum += Student[i].score;
    }
    avg = sum / 10;

    cout << " 전체 총점 : " << sum << endl;
    cout << " 평균 점수 : " << avg << endl;
}