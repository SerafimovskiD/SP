//
// Created by User on 11/20/2023.
//
#include<iostream>
using namespace std;
int main() {
    int n, x;
    cin >> n >> x;
    n--;
    while (n != -1) {
        int razlicni = 1;
        int tempX = x;
        while (tempX != 0) {
            int flag = 0;
            int cifraX = tempX % 10;
            int tempN = n;
            while (tempN != 0) {
                int cifraN = tempN % 10;
                if (cifraX == cifraN) {
                    flag = 1;
                    break;
                }
                tempN = tempN / 10;
            }
            tempX = tempX / 10;
            if (flag == 1) {
                razlicni = 0;
                break;
            }
        }
        if (razlicni == 1) {
            cout << n;
            break;
        }
        n--;
    }
    return 0;
}