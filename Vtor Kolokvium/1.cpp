#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return true;
    return false;
}

int main() {
    const int MAX = 100;
    char str[MAX];
    int countPairs = 0;

    while (cin.getline(str,MAX) && str[0] != '#') {

        for (int i = 0; i < strlen(str); ++i) {
            char currentChar = tolower(str[i]);
            char nextChar = tolower(str[i + 1]);

            if (isVowel(currentChar) && isVowel(nextChar)) {
                cout << currentChar << nextChar << endl;
                countPairs++;
            }
        }
    }
    cout << countPairs << endl;

    return 0;
}