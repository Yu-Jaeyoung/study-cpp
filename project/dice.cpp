#include <iostream>
#include <string>
#include <algorithm>
#include "dice.h"
using namespace std;

Dice::Dice() {
    for (int i = 0; i < 5; i++)
        dice[i] = (rand() % 6 + 1);
    sortDice();
}

void Dice::sortDice() {
    for (int i = 0; i < 5; i++)
        sortedDice[i] = dice[i];
    int* sp = sortedDice;
    sort(sp, sp + 5);
}

bool Dice::reroll() {
    string buffer;
    int val;

    cout << endl << "다시 굴릴 주사위 선택(공백없이 입력, 굴리지 않고 확정 : Enter) >> ";
    getline(cin, buffer);
    if (buffer == "")
        return true;
    else
        for (int i = 0; buffer[i] != NULL; i++) {
            val = buffer[i] - '0';
            dice[val - 1] = (rand() % 6 + 1);
        }
    sortDice();
    return false;
}

//주사위 그대로 출력
void Dice::print() {
    cout << endl << "| ";
    for (int i = 0; i < 5; i++)
        cout << dice[i] << " | ";
    cout << endl;
}

//정렬된 주사위 출력
void Dice::sPrint() {
    cout << endl << "| ";
    for (int i = 0; i < 5; i++)
        cout << sortedDice[i] << " | ";
    cout << endl;
}