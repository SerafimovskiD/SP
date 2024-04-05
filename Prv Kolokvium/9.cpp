#include<iostream>
using namespace std;
int main() {
    char heksacifra;
    int suma = 0;
    while (cin >> heksacifra) {
        if (heksacifra == '.') {
            break;
        }
        int heksabroj;
        if (heksacifra >= 'a' && heksacifra <= 'f') {
            heksabroj = heksacifra - 'a' + 10;
        } else if (heksacifra >= 'A' && heksacifra <= 'F') {
            heksabroj = heksacifra - 'A' + 10;
        } else {
            heksabroj = heksacifra - '0';
        }
        suma = suma + heksabroj;
    }
    if (suma % 16 == 0 && suma % 100 == 16) {
        cout << "Poln pogodok" << endl;
    } else if (suma % 16 == 0) {
        cout << "Pogodok" << endl;
    } else {
        cout << suma << endl;
    }
    return 0;
}