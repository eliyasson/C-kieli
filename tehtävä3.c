/* Kirjoita   ohjelma, joka  pyytää 2 lukua ja laskee niistä summan, vähennyslaskun, tulon ja jakolaskun.
Tulosta tulokset siten että jakolaskun tulos on desimaaliluku 2 desimaalin tarkkuudella. */



#include <stdio.h>

int main() {
    int luku1, luku2;
    int summa, miinus, tulo; 
    float jako;
    
    printf("Anna 2 lukua ");
    scanf("%i %i", &luku1, &luku2);
    
    summa = luku1 + luku2;
    miinus = luku1 - luku2;
    tulo = luku1*luku2;
    jako = (float)luku1/luku2;
    printf("SUMMA = %i\nVAHENNYS = %i\nTULO =%i\nJAKOLASKU = %.2f", summa, miinus, tulo, jako);

 
  return 0;
}