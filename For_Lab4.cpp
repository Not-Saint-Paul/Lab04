/************************************
 * Автор: Станковский П.А.          *
 * Дата: 19.10.2023                 *
 * Название: Shitcode Lab4 v1.2     *
 * https://onlinegdb.com/fV9x0QvXTZ *
 ************************************/
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int noSingleLetterIndex1 = 3, noSingleLetterIndex2, originalNameForIndex;
    int B[noSingleLetterIndex1][noSingleLetterIndex1] = {
    {1, 2, 3},
    {5, -6, -2},
    {-3, 0, -9}
    };
    double numberOfNegative, smallestOfNegative;
    
    for (noSingleLetterIndex2 = 0; noSingleLetterIndex2 < noSingleLetterIndex1; ++noSingleLetterIndex2) {
        for (originalNameForIndex = 0; originalNameForIndex < noSingleLetterIndex1; ++originalNameForIndex) {
            if (B[noSingleLetterIndex2][originalNameForIndex] < 0) {
                numberOfNegative += 1;
                if (B[noSingleLetterIndex2][originalNameForIndex] < smallestOfNegative) {
                    smallestOfNegative = B[noSingleLetterIndex2][originalNameForIndex];
                }
            } 
        }
    }

    cout << "Исходная матрица: " << endl;
    for (noSingleLetterIndex2 = 0; noSingleLetterIndex2 < noSingleLetterIndex1; ++noSingleLetterIndex2) {
        for (originalNameForIndex = 0; originalNameForIndex < noSingleLetterIndex1; ++originalNameForIndex) {
            cout << B[noSingleLetterIndex2][originalNameForIndex] << " ";
        }
        cout << endl;
    }  

    cout << endl << "Количество отрицательных чисел равно: "  << numberOfNegative << endl 
    << "Наименьшее из отрицательных чисел равно: " << smallestOfNegative << endl;

    return 0;
}
