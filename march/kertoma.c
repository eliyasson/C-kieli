/*Kirjoita funktio int kertoma(int n), joka laskee annetun luvun kertoman.

Tee ohjelma joka pyytää luvun ja sen jälkeen tulostaa jokaisen luvun kertoman. Hyödynnä tekemääsi funktiota.*/

// Online C compiler to run C program online
#include <stdio.h>

int kertoma(int n) {
    int kertoma = 1;
    for(int i = 1; i <= n; i++){
        kertoma *=i;
    }
    return kertoma;
}

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%i", &num);
    
    for (int i = 1; i <= num; i++){
        printf("\nnumber %i kertoma is %i", i, kertoma(i));
    }

    return 0;
}