#include<iostream>
using namespace std;
int main() {
    int a, b;
    while (cin >> a >> b) {
        if (a <= 0 || b <= 0) {
            cout << "Invalid input" << endl;
        } else {
            if (a < b) {
                int temp = a;
                a = b;
                b = temp;
            }
            int flag = 1;
            while (b != 0) {
                if (b % 10 != a % 100 / 10) {
                    flag = 0;
                    break;

                }
                b = b / 10;
                a = a / 100;
            }
            if (flag == 1) {
                cout << "PAREN" << endl;
            } else {
                cout << "NE" << endl;
            }
        }

    }

}