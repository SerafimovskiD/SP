#include<iostream>
#include<climits>
using namespace std;
int main() {
    int n;
    int c0 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    int cifra;
    while (cin >> n) {
        int max = 0;
        int maxpoz;
        int pozicija = 0;
        if (n < 99999) {
            while (n != 0) {
                cifra = n % 10;
                if (cifra > max) {
                    max = cifra;
                    maxpoz = pozicija;
                }
                n = n / 10;
                pozicija++;
            }
            if (maxpoz == 0) {
                c0++;
            } else if (maxpoz == 1) {
                c1++;
            } else if (maxpoz == 2) {
                c2++;
            } else if (maxpoz == 3) {
                c3++;
            } else {
                c4++;
            }
        }
    }
    cout << "0: " << c0 << endl;
    cout << "1: " << c1 << endl;
    cout << "2: " << c2 << endl;
    cout << "3: " << c3 << endl;
    cout << "4: " << c4 << endl;

}