/*Tee ohjelma joka kysyy kahden ihmisen iän ja pituuden. Ja tulostaa  iän ja pituuden keskiarvon.  
Kun osaat lisää myös nimien kysely. Tulosta ne kummatkin myös. 
Tulosta keskiarvo 1 desimaalin tarkkuudella. */
#include <stdio.h>

int main() {
    char nimi1[20];
    char nimi2[20];
    float ika1;
    float ika2;
    float pituus1;
    float pituus2;
    float kai;
    float kap;
    
    printf("Anna ekan henkilön nimi: ");
    scanf("%s", nimi1);
    printf("Anna ekan henkilön ika: ");
    scanf("%f", &ika1);
    printf("Anna ekan henkilön pituus: ");
    scanf("%f", &pituus1);
    printf("Anna tokan henkilön nimi: ");
    scanf("%s", nimi2);
    printf("Anna tokan henkilön ika: ");
    scanf("%f", &ika2);
    printf("Anna tokan henkilön pituus: ");
    scanf("%f", &pituus2);
    
    kai = (ika1 + ika2) /2;
    kap = (pituus1 + pituus2) /2;
    
    printf("Henkilöiden %s ja %s keski-ikä on %.1f ja pituus %.1f", kai, nimi1, nimi2, kap);

 
  return 0;
}