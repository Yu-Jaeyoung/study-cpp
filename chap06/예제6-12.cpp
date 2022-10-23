/*
#include <iostream>

using namespace std;

class PersonError {
    int money;
public:
    static int getMoney() { return money };
    //컴파일 오류. static 멤버 함수는 non-static 멤버에 접근할 수 없음

    void setMoney(int money){
        this->money = money;
    }
};

int main() {
    int n = PersonError::getMoney();

    PersonError errorKim;
    errorKim.setMoney(100);
}
*/
