#include <stdio.h>

int main() {
   char str1[20], str2[20], str3[20], str4[20], str5[20], str6[20];
  
  printf("Anna adjektiivia: ");
  scanf("%s", str1);
  printf("Anna Substantiivin partitiivin monikkona: ");
  scanf("%s", str2);
  printf("Anna Verbin  perusmuoto: ");
  scanf("%s", str3);
  printf("Anna Paikan: ");
  scanf("%s", str4);
  printf("Anna Numeron: ");
  scanf("%s", str5);
  printf("Anna Substantviivin perusmuodossa: ");
  scanf("%s", str6);
  
  printf("Anna kun kerron tarinan.\nOli %s ihminen.\nHän halusi saada paljon %s.\nSaadakseen ne häntä käskettiin %s.\n%s on se paikka mistä %s löytyy %s.\nKoska hän ei halunnut %s, %s %s oli hänen kohtalo etsiessään %s", str1,str2, str3, str4, str2, str5, str3, str1, str6, str2);

  return 0;
}