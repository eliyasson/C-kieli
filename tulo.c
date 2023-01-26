/* Tee ohjelma joka kysyy 3 numeron sarjan (alle 10 arvoltaan)  ja tallentaa ne taulukkoon. 
Tulostaa numeroiden tulon laskemalla ne talukosta.*/
#include <stdio.h>


int main() {

    int a,b,c;
    
    int tulos;
    
    printf("Anna luku1 ");
    scanf("%d", &a);
    printf("Anna luku2 ");
    scanf("%d", &b);
    printf("Anna luku3 ");
    scanf("%d", &c);
    
    tulos=a*b*c;
    
    printf("Antamiesi lukujen tulo on %d", tulos);



  return 0;
}
