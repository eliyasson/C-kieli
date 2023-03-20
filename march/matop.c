/*Tee ohjelma joka kysyy liukulukua ja tulostaa matemaattisen funktion (potenssi, neliöjuuri, 
itseisarvo, pyöristys molempiin suuntiin) arvon tuolla luvulla kahden desimaalin tarkkuudella. */

// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    double d;
    
    printf("Anna liukuluku (desimaaliluku) ");
    scanf("%lf", &d);
    
    printf("Luvun Luvun toinen potenssi on %.2lf", pow(d,2));
    
    if(d < 0) {
        printf("\nNegatiivisesta luvusta ei voi ottaa neljiöjuurta");
    } else {
        printf("\nLuvun neljiöjuuri %.2lf", sqrt(d));
    }
    printf("\nLuvun itseisarvo on %.2lf", fabs(d));
    printf("\nluku pyöristettynä alaspäin %.2lf", floor(d));
    printf("\nluku pyöristettynä alaspäin %.2lf", ceil(d));
    

    return 0;
}