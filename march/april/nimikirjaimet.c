//Täydennä seuraavan sivun ohjelma, joka kysyy etunimen ja sukunimen ja kertoo nimikirjaimet.
#include <stdio.h>

int main() {
    char e[100], s[100];
    char *E, *S;
    
    printf("Anna etunimeni: ");
    scanf("%s", e);
    getchar();
    printf("Anna sukunimi: ");
    scanf("%s", s);
    getchar();
    
    E = &e[0];
    S = &s[0];
    
    if (e[0] >= 'a' && e[0] <= 'z') {
        e[0] = e[0] - 32;
        s[0] = s[0] - 32;
    }
    
    printf("nimikirjaimesi ovat %c%c\n", e[0], s[0]);

    return 0;
}