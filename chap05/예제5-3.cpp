/*
#include <iostream>

using namespace std;

int main(void) {
    cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
    int i = 1;
    int n = 2;
    int &refn = n;
    n = 4;
    refn++;
    cout << i << '\t' << n << '\t' << refn << endl;
    //1 5 5
    refn = i;
    refn++;
    cout << i << '\t' << n << '\t' << refn << endl;
    // 1 2 2
    int *p = &refn;
    *p = 20;
    cout << i << '\t' << n << '\t' << refn << endl;
    // 1 20 20
}*/
