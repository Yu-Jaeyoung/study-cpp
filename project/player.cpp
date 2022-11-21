#include <iostream>
#include "player.h"

Player::Player() {
    total = 0;
}

void Player::add(int score) {
    total += score;
}

int Player::getTotal() {
    return total;
}

int Player::operator^(Player op2) {
    if (this->total > op2.total)
        return 1;
    else if (this->total < op2.total)
        return 0;
    else
        return -1;
}