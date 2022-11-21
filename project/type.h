#pragma once

#include "dice.h"

class Type : public Dice {
public:
    int getType();

    virtual int getScore() = 0;
};