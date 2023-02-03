/* Määrittele 3 taulukkoa, joiden koko on  6.  
ALusta ne nollaksi.Kysy käyttäjältä isoimpaan taulukkoon 6 kokonasilukua. 
Talenna isosta taulukosta alkioiden arvoja vuorotellen kahteen pienempään taulukkoon ja tulosta lopuksi kaikki taulukot. 
Käytä aina kun voit for-silmukkaa. */

#include <stdio.h>

int main() {
    int taulu1[6] = {0};
    int taulu2[6] = {0};
    int taulu3[6] = {0};
    int i;
    printf("Anna 6 kokonaislukua:\n");
    for (i = 0; i < 6; i++) {
        printf("Anna %d numero: ", i + 1);
        scanf("%d", &taulu1[i]);
    }
    for (i = 0; i < 6; i += 2) {
        taulu2[i] = taulu1[i];
    }
    for (i = 1; i < 6; i += 2) {
        taulu3[i] = taulu1[i];
    }
    printf("\n");
    printf("taulu1: [");
    for (i = 0; i < 6; i++) {
        printf("%d", taulu1[i]);
        if (i < 5) {
            printf(", ");
        }
    }
    printf("]\n");
    printf("taulu2: [");
    for (i = 0; i < 6; i++) {
        printf("%d", taulu2[i]);
        if (i < 5) {
            printf(", ");
        }
    }
    printf("]\n");
    printf("taulu3: [");
    for (i = 0; i < 6; i++) {
        printf("%d", taulu3[i]);
        if (i < 5) {
            printf(", ");
        }
    }
    printf("]\n");
    return 0;
}