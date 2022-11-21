#pragma once

class Player {
    int total;
public:
    Player();

    void add(int point);

    int getTotal();

    int operator^(Player op2);
};