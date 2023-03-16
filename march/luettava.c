//Kirjoita ohjelma joka etsii kahdesta 5 alkion kokoisesta taulukosta keskimmäiset alkiot ja tekee niistä oman taulukon.

#include <stdio.h>

int main() {
   int taulu1[5] = {1, 2, 3, 4, 5};
   int taulu2[5] = {6, 7, 8, 9, 1};
   int uusiTaulu[2];
   
   uusiTaulu[0] = taulu1[2];
   uusiTaulu[1] = taulu2[2];
   
   printf("taulu 1: {");
   for(int i = 0; i < 5; i++){
       printf("%i, ", taulu1[i]);
   }
   printf("}\n");
   
   printf("taulu 2: {");
   for(int i = 0; i < 5; i++){
       printf("%i, ", taulu2[i]);
   }
   printf("}\n");
   
   printf("Uusi taulu: {");
   for(int i = 0; i < 2; i++){
       printf("% i ", uusiTaulu[i]);
   }
   printf("}\n");
   

    return 0;
}