/* tee ohjelma joka kysyy lämpötilan (Celsius). Ja tulostaa seuraavasti:

Temp  alle 0 tai yhtäsuuri , On pakkasta
Temp 0- 20 , Suomen kesä  
Temp 20 - 35,  Vihdoinkin lämmin
Temp 35 - 60.  Liian kuuma
Temp yli 60, Olet saunassa */

#include <stdio.h>

int main() {
    float temp;
    
    printf("Anna lampotila (C): ");
    scanf("%d", &temp);
    
    if(temp < 0){
        printf("on pakkasta");
    } else if(temp <= 20) {
        printf("Suomen kesä");
    } else if(temp <= 35) {
        printf("Vihdoinkin lämmin");
    } else if(temp <= 60) {
        printf("Liian kuuma");
    } else {
        printf("Olet saunassa");
    };

    return 0;
}
