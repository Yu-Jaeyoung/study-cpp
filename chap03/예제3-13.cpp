#include <iostream>

using namespace std;

int main_13(void) {
    int iArray[3][3];
    int k = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            iArray[i][j] = k;
            k++;
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << "{ ";
        for (int j = 0; j < 3; j++) {
            if (j == 2) {
                cout << iArray[i][j];
                break;
            }
            cout << iArray[i][j] << ", ";
        }
        cout << " }" << endl;
    }
}