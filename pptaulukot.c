/* Tee ohjelma jossa on 6 postiivista kokonaislukua taulukossa. Käytä rand() funktiota taulukon luontiin. 
Ohjelma laijittelee ne parillisiin ja parittomiin omiin taulukoihin sekä tulostaa taulukot.

Vinkki: Muista että taulukko ei ole tyhjä ellet alusta sitä taulukko[6] = {0}. Jotta et tulosta nollia , 
niin tarkasta että luku ei ole nolla ennen kuin tulostat sen (VINKKI != 0) */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num[6] = {0};
    int parillinen_num[6] = {0}; 
    int pariton_num[6] = {0};
   
    
    srand(time(NULL));

    for (int i = 0; i < 6; i++) {
       num[i] = rand();
    }

    for (int i = 0; i < 6; i++) {
        if (num[i] % 2 == 0) {
           parillinen_num[i] = num[i];
        } else {
            pariton_num[i] = num[i];
        }
    }

    printf("Parilliset : ");
    for (int i = 0; i < 6; i++) {
        if (parillinen_num[i] != 0) {
            printf("%d ", parillinen_num[i]);
        }
    }
    printf("\n");

 
    printf("Parittomat : ");
    for (int i = 0; i < 6; i++) {
        if (pariton_num[i] != 0) {
            printf("%d ", pariton_num[i]);
        }
    }
    printf("\n");

    return 0;
}

