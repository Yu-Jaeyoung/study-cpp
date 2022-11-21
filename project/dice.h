#pragma once

class Dice {
    int dice[5];
protected:
    int sortedDice[5];
public:
    Dice();

    void print();

    void sPrint();

    bool reroll();

    void sortDice();
};