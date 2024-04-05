#include<iostream>
using namespace std;
int main() {
    int broj;
    int cifra;
    cin >> broj;
    if (broj <= 9) {
        cout << "Brojot ne e validen" << endl;

    } else {
        while (broj > 9) {
            broj--;
            int reverse = 0;
            int counter = 0;
            int temp = broj;
            while (temp != 0) {
                cifra = temp % 10;
                reverse = reverse * 10 + cifra;
                temp = temp / 10;

            }
            temp = broj;
            while (temp != 0) {
                counter++;
                temp = temp / 10;
            }
            if (reverse % counter == 0) {
                cout << broj << endl;
                break;
            }

        }


    }
    return 0;
}