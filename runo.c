// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array

#include <stdio.h>

int main() {
   char adjectivi[20], partitiivi[20], perusmuoto[20], paikan[20], perusmuodo[20];
   int number;
  
  printf("Anna adjektiivia: ");
  scanf("%s", adjectivi);
  printf("Anna Substantiivin partitiivin monikkona: ");
  scanf("%s", partitiivi);
  printf("Anna Verbin  perusmuoto: ");
  scanf("%s", perusmuoto);
  printf("Anna Paikan: ");
  scanf("%s", paikan);
  printf("Anna Numeron: ");
  scanf("%i", &number);
  printf("Anna Substantviivin perusmuodossa: ");
  scanf("%s", perusmuodo);
  
  printf("Anna kun kerron tarinan.\nOli %s ihminen.\nHän halusi saada paljon %s.\nSaadakseen ne häntä käskettiin %s!\n%s on se paikka mistä %s löytyy %i.\nKoska hän ei halunnut %s, %s %s oli hänen kohtalo etsiessään %s", adjectivi, partitiivi, perusmuoto, paikan, partitiivi, number, perusmuoto, adjectivi, perusmuodo, partitiivi);

  return 0;
}
