/*사용자로 부터 입력할 정수의 개수를 입력 받아 배열을 동적 할당 받고 하나씩 정수를 입력 받은 후 평균 출력*//*


#include <iostream>

using namespace std;

int main(void) {
    int num;
    cout << "입력할 정수의 개수는 ? : ";
    cin >> num;

    if (num <= 0) {
        cout << "0보다 큰 수를 입력하시오.";
        return 0;
    } //예외 처리

    int *pInt = new int[num];
    int sum = 0;

    for (int i = 0; i < num; i++) {
        cout << i + 1 << "번째 정수 : ";
        cin >> pInt[i];
        sum += pInt[i];
    }

    cout << endl << "평균은 " << sum / num << "입니다.";
    delete[] pInt;
    //delete 되는 것은 배열의 시작 주소에 있어야 한다. -> 시작 주소를 pInt가 가리키고 있어야 한다.
}*/
