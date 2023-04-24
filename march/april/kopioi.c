/*Kirjoita funktio , joka kopioi annetun taulun  kokonaisluku alkiot toiseen tauluun. 
Hyödynnät osoittimia. Tulosta lopuksi taulut. Hyödynnä aiemmin tekemääsi funktiota tässä.*/

#include <stdio.h>

void kopioiTaulu(int *taulu1, int *taulu2, int koko){
    int *end = (taulu1 + (koko - 1));
    while(taulu1 <= end){
        *taulu2 = *taulu1;
        printf("taulu %i \n", *taulu1);
        taulu1++;
        taulu2++;
    }
}

void tulostaTaulu(int *taulu, int koko){
    printf("[ ");
    for(int i = 0; i < koko; i++){
        printf("%i ", taulu[i]);
    }
    printf("]\n");
}

int main() {
    int koko;
    printf("Anna taulun koko? ");
    scanf("%i", &koko);
    
    int taulu1[koko];
    int taulu2[koko];
    
    printf("Anna taulukon alkiot: \n");
    for(int i = 0; i < koko; i++){
        printf("%i.alkio: ", i+1);
        scanf("%i", &taulu1[i]); 
    }

    kopioiTaulu(taulu1, taulu2, koko);
    
    printf("Alkuperäinen taulu: ");
    tulostaTaulu(taulu1, koko);
    printf("Kopioitu taulu: ");
    tulostaTaulu(taulu2, koko);

    return 0;
}