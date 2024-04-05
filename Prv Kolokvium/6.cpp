#include<iostream>
using namespace std;
int main() {
    int z;
    cin >> z;
    int brojacparovi = 0;
    int brojacTotal = 0;
    int a, b;
    while (cin >> a >> b) {

        if (a == 0 && b == 0) {
            break;
        }

        if (a + b == z) {
            brojacparovi++;
        }
        brojacTotal++;

    }
    float procent;
    procent = ((float) brojacparovi * 100) / brojacTotal;
    cout << "Vnesovte " << brojacparovi << " parovi od broevi chij zbir e " << z << endl;
    cout << "Procentot na parovi so zbir " << z << " e " << procent << "%" << endl;
}