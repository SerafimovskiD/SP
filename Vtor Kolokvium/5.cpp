#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
// Resena vo C

using namespace std;
// ne menuvaj ovde
void wf() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}


int main() {
    wf();
    // vasiot kod ovde

    int uplata, tip;
    int max_tip;
    char max_sifra[10];
    char sifra[10];

    float koef, max_koef, dobivka = 1;

    FILE *f = fopen("livce.txt", "r");

    if (!f) {
        printf("Can not open file livce.txt");
        exit(-1);
    }


    fscanf(f, "%d", &uplata);

    if (fscanf(f, "%s %d %f", max_sifra, &max_tip, &max_koef) && !feof(f)) {

        dobivka = uplata * max_koef;

        while (fscanf(f, "%s %d %f", sifra, &tip, &koef) && !feof(f)) {
            dobivka *= koef;

            if (koef > max_koef) {
                strcpy(max_sifra, sifra);
                max_tip = tip;
                max_koef = koef;
            }

        }

        cout << max_sifra << " " << max_tip << " " << max_koef << endl << dobivka;
    }

    fclose(f);
    return 0;
}