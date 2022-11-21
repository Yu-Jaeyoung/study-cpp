#pragma once

#include "type.h"

#define YACHT 100
#define FULLHOUSE 40
#define FOUR 60
#define THREE 20
#define LS 50
#define SS 30
// ↑ 점수를 설정 ↑


class Yacht : public Type {
public:
    Yacht();

    int getScore();
};

class FullHouse : public Type {
public:
    FullHouse();

    int getScore();
};

class FourofaKind : public Type {
public:
    FourofaKind();

    int getScore();
};

class ThreeofaKind : public Type {
public:
    ThreeofaKind();

    int getScore();
};

class LargeStraight : public Type {
public:
    LargeStraight();

    int getScore();
};

class SmallStraight : public Type {
public:
    SmallStraight();

    int getScore();
};