//Tee ohjelma joka kysyy kuukauden ja tulostaa sen terminaaliin käyttämällä gets ja puts funktioita.

#include <stdio.h>

int main() {
    char month[20];
    
    printf("Please enter a month: ");
    gets(month);
    
    puts("You entered the month of:");
    puts(month);
    return 0;
}