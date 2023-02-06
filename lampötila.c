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

/* Lisää edelliseen tuntitehtävään muunnos jos lämpötila annetaan Fahrenheitina. 
VINKKI C = (F - 32)/1.8. Testaa kummatkin, kun annetaan Celsius asteet ja Farenheit. */

#include <stdio.h>

int main() {
    float temp;
    char c;
    
    printf("Fahrenheita (f) vai Celsius (c) ? ");
    scanf("%c", &c);
    if (c != 'F' && c != 'C' && c != 'c' && c != 'f'){
        printf("Invalid temperature unit entered.\n");
        return 1;
    }
    printf("Anna lampotila: ");
    scanf("%f", &temp);
    if (c == 'f' || c == 'F' ){
        temp = (temp - 32)/1.8;
        printf("%.2f C\n", temp);
    } else if (c == 'C' || c == 'c') {
        printf("%.2f°C\n", temp);
    } 
    
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