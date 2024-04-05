#include<iostream>
using namespace std;
int main() {
    char znak;
    int suma = 0;
    int broj = 0;
    while (cin >> noskipws >> znak) {
        if (znak >= '0' && znak <= '9') {
            broj = broj * 10 + znak - '0';
        } else {
            suma = suma + broj;
            broj = 0;
        }
        if (znak == '!') {
            break;
        }
    }
    cout << suma << endl;
}