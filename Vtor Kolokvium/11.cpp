#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;
void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}
int main() {
    const int max_length = 100;
    char line[max_length];

    while (cin.getline(line, max_length) && line[0] != '#') {
        int digit_count = 0;
        char digits[max_length];

        for (int i = 0; line[i] != '\0'; ++i) {
            if (isdigit(line[i])) {
                digits[digit_count++] = line[i];
            }
        }

        if (digit_count > 0) {
            bool  swapped = true;
            while (swapped) {
                swapped = false;
                for (int k = 0; k < digit_count-1; ++k) {
                    if (digits[k] > digits[k + 1]) {
                        swap(digits[k], digits[k + 1]);
                        swapped = true;
                    }
                }
            }


            cout << digit_count << ":";
            for (int i = 0; i < digit_count; ++i) {
                cout << digits[i];
            }
            cout << endl;
        } else {
            cout << "0: " << endl;
        }
    }

    return 0;
}