#include <iostream>
#include <limits>
using namespace std;
const int SIZE = 6;

int main() {
    int matrix[SIZE][SIZE] = {
        {1,  2,  3,  4,  5,  6},
        {7,  8,  9,  10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36}
    };
    int uMin = numeric_limits<int>::max();
    int lMin = numeric_limits<int>::max();
    for (int i = 0; i < SIZE; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            if (matrix[i][j] < uMin) {
                uMin = matrix[i][j];
            }
        }
    }
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] < lMin) {
                lMin = matrix[i][j];
            }
        }
    }
    int maxMin = max(uMin, lMin);
    for (int i = 0; i < SIZE; i++) {
        matrix[i][i] = maxMin;
    }
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << matrix[i][j] << " ";
        };
        cout << endl;
    }
    return 0;
}
