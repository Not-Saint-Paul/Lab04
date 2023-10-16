/************************************
 * Автор: Станковский П.А.          *
 * Дата: 17.10.2023                 *
 * Название: Shitcode Lab4 v1       *
 * https://onlinegdb.com/V2roYe2lw  *
 ************************************/
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int n, i, j;
    int B[n][n];
    double numberOfNegative, smallestOfNegative;
    
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            if (B[i][j] < 0) {
                numberOfNegative += 1;
                if (B[i][j] < smallestOfNegative) {
                smallestOfNegative = B[i][j];
                }
            }
        }
    }
    
    cout << "numberOfNegative = "  << numberOfNegative << " smallestOfNegative =" << smallestOfNegative << endl;

    return 0;
}
