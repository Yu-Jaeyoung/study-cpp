//#include <iostream>
//#include "dice.h"
#include "type.h"
#include "points.h"

using namespace std;

int Type::getType() {

    if (sortedDice[0] == sortedDice[4])
        return YACHT;
    else if ((sortedDice[0] == sortedDice[3]) || (sortedDice[1] == sortedDice[4]))
        return FOUR;
    else if (((sortedDice[0] == sortedDice[1]) && (sortedDice[2] == sortedDice[4]))
             || ((sortedDice[0] == sortedDice[2]) && (sortedDice[3] == sortedDice[4])))
        return FULLHOUSE;
    else if ((sortedDice[0] == sortedDice[2])
             || (sortedDice[1] == sortedDice[3])
             || (sortedDice[2] == sortedDice[4]))
        return THREE;

    int i, j = -1, cnt = 0;
    for (i = 0; i < 4; i++) {
        if ((sortedDice[i] + 1) == sortedDice[i + 1])
            for (j = i; j < 4; j++) {
                if ((sortedDice[j] + 1) == sortedDice[j + 1])
                    cnt++;
                else if (((sortedDice[j] + 1) != sortedDice[j + 1]) &&
                         (sortedDice[j] != sortedDice[j + 1]))
                    return 0;
            }
        if (j == 4)
            break;
    }

    if (cnt == 4)
        return LS;
    else if (cnt == 3)
        return SS;

    return 0;
}