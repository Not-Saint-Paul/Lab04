/************************************
 * Автор: Станковский П.А.          *
 * Дата: 17.10.2023                 *
 * Название: Shitcode Lab4 v1.1     *
 * https://onlinegdb.com/MmUSj3ouO  *
 ************************************/
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    setlocale(LC_ALL, "Russian");
    
    int n = 3, i, j;
    int B[n][n] = {
    {1, 2, 3},
    {5, -6, -2},
    {-3, 0, -9}
    };
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

    cout << "Исходная матрица: " << endl;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }  

    cout << endl << "Количество отрицательных чисел равно: "  << numberOfNegative << endl 
    << "Наименьшее из отрицательных чисел равно: " << smallestOfNegative << endl;

    return 0;
}
