#include <iostream>

using namespace std;

int main(void) {
    int kor = 85, eng = 95, math = 100;
    float ave = 0.0;
    ave = (kor + eng + math) / 3;
    if (ave>=90){
        cout << " A\n";
    }
    else if(ave >= 80){
        cout << " B\n";
    }
    else{
        cout << "F\n";
    }

    if(kor > ave)
    {
        cout << " kor 가 ave 보다 큽니다.";
    }
    else
    {
        cout << " kor 가 ave 보다 작습니다.";
    }
}