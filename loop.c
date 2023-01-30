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

/* Tee ohjelma joka kysyy taulukon koon(n) käyttäjältä. Sen jälkeen pyytää käyttäjää antamaan alkoiden arvot. 
Lopuksi tulostaa ne käänteisessä järjestyksessä. Käytä for-silmukkaa.*/

#include <stdio.h>

int main() {
    int x;
    
    printf("Anna lukujonon pituus  ");
    scanf("%i", &x);
    int taulu[x];
 
    for(int i = 0; i < x; i++)
    { 
        printf("Anna %i. luku :", i+1);
        scanf("%i", &taulu[i]);
    }
    printf("Lukujono on ");
    for(int i = 0; i < x; i++){
        printf("%i ", taulu[i]);
    }
    

    return 0;
}