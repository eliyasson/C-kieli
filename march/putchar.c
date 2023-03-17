//Tee ohjelma joka kysyy 2 kirjainta kahdella scanf:llä  ja tulosta ne putchar:illa. pitää käyttää myös getchar

#include <stdio.h>

int main() {
    char k1, k2;

    printf("anna 1 kirjain: ");
    scanf("%c", &k1);
    getchar(); 

    printf("anna 2 kirjain: ");
    scanf("%c", &k2);
    getchar(); 

    putchar(k1);
    putchar(k2);

    return 0;
}