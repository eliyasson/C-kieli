/*Tee ohjelma, joka kysyy käyttäjältä ensi monta sanaa taulukkoon tallennetaan , 
sitten sanat ja tallentaa ne taulukoon. Ohjelma tulostaa taulukon.*/

#include <stdio.h>

int main() {
    int n;
    printf("Monta sanaa tallennat? ");
    scanf("%i", &n);
    
    char taulu2d[n][20];
    for(int i = 0; i < n; i++){
        printf("Anna Sana %i: ", i + 1);
        scanf("%s", taulu2d[i]);
    }
    printf("Taulu on:\n");
    for (int i = 0; i < n; i++){
        printf("%s\n", taulu2d[i]);
    }
    

    return 0;
}