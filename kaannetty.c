/*Kirjoita ohjelma joka lukee n kappaletta kirjaimia taulukkoon ja sen jälkeen tulostaa ne käänteisessä järjestyksessä.  
Koodissa täytyy käyttää for-silmukkaa.  */

#include <stdio.h>

int main() {
    int n;
    char kirjain[n];

    printf("Anna taulukkoon luettavien kirjainten lukumaara: ");
    scanf("%d", &n);
    
    printf("Anna %d numeroa taulukkoon:\n", n);
    scanf("d", &n);

   

    for (int i = 0; i < n; i++) {
        printf("%d. kirjain: ", i+1);
        scanf(" %c", &kirjain[i]);
    }

   
    printf("Taulukko kaannettyna on: [");
    for (int i = n - 1; i >= 0; i--) {
        printf("%c", kirjain[i]);
        if (i > 0) {
            printf(", ");
        };
    }
    printf("]");

    return 0;
}