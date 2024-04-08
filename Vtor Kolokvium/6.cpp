#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int a[100][100];

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    int countRows = 0;
    int countCols = 0;


    for (int i = 0; i < m; ++i) {
        int consecutiveOnes = 0;
        for (int j = 0; j < n; ++j) {
            if (a[i][j] == 1) {
                consecutiveOnes++;
                if (consecutiveOnes == 3) {
                    countRows++;
                    break;
                }
            } else {
                consecutiveOnes = 0;
            }
        }
    }


    for (int i = 0; i < n; ++i) {
        int consecutiveOnes = 0;
        for (int j = 0; j < m; ++j) {
            if (a[j][i] == 1) {
                consecutiveOnes++;
                if (consecutiveOnes == 3) {
                    countCols++;
                    break;
                }
            } else {
                consecutiveOnes = 0;
            }
        }
    }

    cout << countRows + countCols;

    return 0;
}