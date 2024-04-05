#include<iostream>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;
    int cifra;
    int flag;
    for (int broj = m; broj <= n; broj++) {
        flag = 1;
        int temp = broj;
        while (temp != 0) {
            cifra = temp % 10;
            if (cifra % 2 != 0) {
                flag = 0;
                break;
            }
            temp = temp / 10;
        }
        if (flag == 1) {
            cout << broj << endl;
            break;
        }
    }
    if (flag == 0) {
        cout << "NE" << endl;
    }
}