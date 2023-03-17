//Kirjoita tehtävä missa keksit koodi, ja käytät functiont gets() ja puts(). 
//Ohjelma tarvi kysyä nimeä ja tallenna se gets() function käyttämällä. 
//Ja sen jälkeen ohjelma tarvi tulosta “Moi, nimi”.

#include <stdio.h>

int main() {
   char nimi[50];

   printf("Anna nimi: ");
   gets(nimi);

   printf("Moi, %s", nimi);

   return 0;
}