#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
#include "dice.h"
#include "type.h"
#include "player.h"
#include "points.h"

#define MAX_TURN 4
using namespace std;

int bringScore(Type *tp) {
    int tmp = tp->getScore();
    delete tp;
    return tmp;
}

int calScore(Type *tp) // Type *tp = (Type*)dp; 다운캐스팅 > 추상클래스 tp의 함수를 쓰기 위함.
{
    switch (tp->getType()) {
        case YACHT:
            return bringScore(new Yacht());
        case FULLHOUSE:
            return bringScore(new FullHouse());
        case FOUR:
            return bringScore(new FourofaKind());
        case THREE:
            return bringScore(new ThreeofaKind());
        case LS:
            return bringScore(new LargeStraight());
        case SS:
            return bringScore(new SmallStraight());
        default:
            return 0;
    }
}

void printTotal(Player p1, Player p2) {
    cout << "[ Player1 ] " << p1.getTotal() << endl;
    cout << "[ Player2 ] " << p2.getTotal() << endl;
}

int main() {
    cout << endl << "===========================《 Yacht Game 》=============================" << endl;
    cout << "========== 주사위를 굴려 상대방 보다 높은 점수를 획득하세요! ===========" << endl;
    cout << "========================================================================" << endl << endl;
    cout << "  주사위 점수 구성 " << endl << endl;
    cout << "  [ Three of a kind ] 주사위 수 3개가 같은 경우 : " << THREE << "점" << endl;
    cout << "  [ Four of a kind ] 주사위 수 4개가 같은 경우 : " << FOUR << "점" << endl;
    cout << "  [ Small Straight ] 주사위 수 4개가 연속되는 숫자인 경우 : " << SS << "점" << endl;
    cout << "  [ Large Straight ] 주사위 수 5개가 연속되는 숫자인 경우 : " << LS << "점" << endl;
    cout << "  [ Full House ] 주사위의 수가 2개 그리고 3개가 같은 경우 : " << FULLHOUSE << "점" << endl;
    cout << "  [ Yacht ] 주사위 수 5개가 같은 숫자인 경우 : " << YACHT << "점" << endl << endl << endl;
    cout << "===========================< GAME START!! >============================" << endl << endl;

    srand((unsigned int) time(NULL));
    Player p1, p2;
    int turn = 1;
    do {
        if (turn % 2 == 1)
            cout << "♥[ Player1 ]♥" << endl;
        else
            cout << "★[ Player2 ]★" << endl;

        Dice *dp = new Dice;
        dp->print();

        for (int i = 0; i < 2; i++) {
            if (dp->reroll())
                break;

            dp->print();
        }
        cout << endl;

        dp->sPrint();
        cout << endl;

        int score = calScore((Type *) dp);
        delete dp;

        cout << endl << "획득 점수 : " << score << endl << endl;
        cout << endl << "=======================================================================" << endl << endl;

        if (turn % 2 == 1)
            p1.add(score);
        else
            p2.add(score);

        if (turn != MAX_TURN) {
            cout << " < 누적 점수 > " << endl;
            printTotal(p1, p2);
            cout << endl << "=======================================================================" << endl << endl;
        }

    } while (++turn <= MAX_TURN);

    cout << " << 최종 결과 >> " << endl;
    printTotal(p1, p2);
    cout << endl;

    switch (p1 ^ p2) {
        case 1:
            cout << "Player 1 승리!" << endl;
            break;
        case 0:
            cout << "Player 2 승리!" << endl;
            break;
        default:
            cout << "동점입니다. 재경기하세요!" << endl;
            break;
    }
}