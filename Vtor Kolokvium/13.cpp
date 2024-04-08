
#include<iostream>
using namespace std;
int main() {
    int x, n, m;
    int a[100][100];
    cin >> x;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        int s = 0;
        for (int j = 0; j < m; j++) {
            s += a[i][j];
        }
        for (int j = 0; j < m; j++) {
            if (s > x) {
                a[i][j] = 1;
            } else if (s < x) {
                a[i][j] = -1;
            } else {
                a[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}