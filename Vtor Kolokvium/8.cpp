#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    const int max = 100;
    char a[max];
    int startindex;
    int endindex;
    char takvaniza[max];
    int maxbrojac = 0;

    while (cin.get(a, max) && a[0] != '0') {
        cin.get();
        startindex = -1;
        endindex = -1;
        int length = strlen(a);

        for (int i = 0; i < length; ++i) {
            if (isdigit(a[i])) {
                if (startindex == -1) {
                    startindex = i;
                }
            }
        }

        for (int i = length - 1; i > 0; --i) {
            if (isdigit(a[i])) {
                if (endindex == -1) {
                    endindex = i;
                }
            }
        }

        int brojac = 0;
        for (int i = startindex; i <= endindex; ++i) {
            brojac++;
        }

        if (brojac > maxbrojac) {
            for (int i = 0; i < brojac; ++i) {
                takvaniza[i] = a[i + startindex];
            }
            takvaniza[brojac] = '\0';  // Null-terminate the string
            maxbrojac = brojac;
        }
    }

    cout << takvaniza << endl;
    return 0;
}