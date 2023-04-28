/* Tee ohjelma joka luo 3 numeron satunnaislukutaulukon ja estii siitä isoimman ja pienemmän luvun. 
Etsi pienin ja isoin luku itse tekemilläsi funktiolla int min(int *x) ja int max(int *x).  
Funktiot saavat argumenteiksi osoittimen taluun.  Eli kun sinulla on int  t[], 
voit etsiä sen  pienimmän numeron min(t). 
Muista tulun nimi on osoitin sen ensimmäiseen alkioon t = &t[0].*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int min(int* x) {
    int min = *x;
    for (int i = 1; i < 3; i++) {
        if (*(x + i) < min) {
            min = *(x + i);
        }
    }
    return min;
}

int max(int* x) {
    int max = *x;
    for (int i = 1; i < 3; i++) {
        if (*(x + i) > max) {
            max = *(x + i);
        }
    }
    return max;
}

int main() {
    int taulu[3];
    srand(time(0));
    for (int i = 0; i < 3; i++) {
        taulu[i] = rand();
        printf("%d\n", taulu[i]);
    }
    int pienin = min(taulu);
    int suurin = max(taulu);
    printf("Pienin luku on %d\n", pienin);
    printf("Suurin luku on %d\n", suurin);
    return 0;
}
