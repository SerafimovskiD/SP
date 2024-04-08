#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main() {
    const int max_length = 80;
    char niza[max_length];
    int startindex = -1, endindex = -1;

    while (cin.getline(niza, max_length) && niza[0] != '#') {
        for (int i = 0; i < strlen(niza); ++i) {
            if (isalpha(niza[i])) {
                startindex = i;

                while (isalpha(niza[i])) {
                    i++;
                }

                endindex = i;

                for (int j = startindex; j < endindex; ++j) {
                    cout << niza[j];
                }
                cout << " ";
            }

        }
        cout << endl;
    }

    return 0;
}