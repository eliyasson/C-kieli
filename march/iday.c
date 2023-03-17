//Tee ohjelman joka määrittele taulukko, joka tallentaa lauseen ”6 Dec 1917” Sen jälkeen ohjelma.käyttää sscanf()tulostaa päivä, kuukautta ja vuosi erikseen. 

#include <stdio.h>

int main() {
  char date[] = "6 Dec 1917";
  int paiva, vuosi;
  char kuukautta[3];

  sscanf(date, "%i %s %i", &paiva, kuukautta, &vuosi);

  printf("Päivä: %i\n", paiva);
  printf("kuukautta: %s\n", kuukautta);
  printf("Vuosi: %i\n", vuosi);

  return 0;
}