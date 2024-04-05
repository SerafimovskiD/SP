
#include<iostream>
using namespace std;
int main() {
    int cifra1;
    int cifra2;
    int x;
    int znak;
    while (cin >> x) {
        if (x < 10) {
            continue;
        }
        int temp = x;
        cifra1 = x % 10;
        cifra2 = x / 10 % 10;
        if (cifra1 > cifra2) {
            znak = 1;
        } else if (cifra1 < cifra2) {
            znak = 0;
        } else {
            continue;
        }
        x = x / 10;
        int zigzak = 1;
        while (x > 9) {
            cifra1 = x % 10;
            cifra2 = x / 10 % 10;
            if (znak == 1) {
                if (cifra1 >= cifra2) {
                    zigzak = 0;
                }
                znak = 0;
            } else {
                if (cifra1 <= cifra2) {
                    zigzak = 0;
                }
                znak = 1;
            }
            x = x / 10;
        }
        if (zigzak == 1) {
            cout << temp << endl;

        }
    }

}