#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int suma = 0;
    int maxDelitel = 0;
    int maxBroj;
    n--;
    while (n > 1) {
        int suma = 0;
        for (int delitel = 1; delitel <= n / 2; delitel++) {
            if (n % delitel == 0) {
                suma = suma + delitel;
            }
        }
        if (suma > maxDelitel) {
            maxDelitel = suma;
            maxBroj = n;
        }
        n--;
    }
    cout << maxBroj;
}