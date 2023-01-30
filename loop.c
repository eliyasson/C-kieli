/* Tee ohjelma joka rakentaa taulukon kokonaisluvuita 1 - n. 
Sen jälkeen tulostaa kaikki luvut. Sinun pitää käyttää for-silmukka.*/

#include <stdio.h>

int main() {
    int x;
    
    printf("Anna lukujonon pituus  ");
    scanf("%i", &x);
    int taulu[x];
    
    printf("Lukujono on ");
    
    
    for(int i = 0; i < x; i++)
    { 
        taulu[i] = i+1;
        printf("%i ", taulu[i]);
    }
    

    return 0;
}