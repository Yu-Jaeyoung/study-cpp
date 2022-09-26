#include <iostream>

using namespace std;

int main_18(void) {
    int *iptr, iary[6] = {1, 2, 3, 4, 5, 6};
    float *fptr, fary[2][3] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
    iptr = iary;
    //fptr = &fary[0][0];
    fptr = fary[0];
    for (int n = 0; n < 6; n++) {
        cout << *(iptr + n) << " , " << iary[n] << endl;
    }
    for (int m = 0; m < 2; m++) {
        for (int n = 0; n < 3; n++) {
            cout << *(fptr + 3 * m + n) << " , " << fary[m][n] << endl;
        }
    }
}