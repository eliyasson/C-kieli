#include <stdio.h>

int main() {

  int taulu[3];
  int summa;

  printf("Anna luku1: ");
  scanf("%i", &taulu[0]);
  printf("Anna luku2: ");
  scanf("%i", &taulu[1]);
  printf("Anna luku3: ");
  scanf("%i", &taulu[2]);
  summa = taulu[0]+taulu[1]+taulu[2];
  
  printf("Taulukko on nyt [%i, %i, %i]\n", taulu[0], taulu[1], taulu[2]);
  printf("Alkioiden summa on %i", summa);

 
  return 0;
}