#include <iostream>
#include "points.h"

using namespace std;

Yacht::Yacht() { cout << "Yacht!!" << endl; }

int Yacht::getScore() { return YACHT; }

FullHouse::FullHouse() { cout << "Full House" << endl; }

int FullHouse::getScore() { return FULLHOUSE; }

FourofaKind::FourofaKind() { cout << "Four of a Kind" << endl; }

int FourofaKind::getScore() { return FOUR; }

ThreeofaKind::ThreeofaKind() { cout << "Three of a Kind" << endl; }

int ThreeofaKind::getScore() { return THREE; }

LargeStraight::LargeStraight() { cout << "Large Straight" << endl; }

int LargeStraight::getScore() { return LS; }

SmallStraight::SmallStraight() { cout << "Small Straight" << endl; }

int SmallStraight::getScore() { return SS; }