#include <stdio.h>

int main() {
    char e, s, c;
    char *E, *S;
    
    printf("Anna etunimeni: ");
    scanf("%c", &e);
    do{
        c = getchar();
    } while (c != '\n' && c != EOF);
    printf("Anna sukunimi: ");
    scanf("%c", &s);
    E = &e;
    S = &s;
    
    if(97 < e < 132){
        e = e+32;
        *S =*S+32;
    }
    
    
    
    printf("nimikirjaimesi ovat %c%c", *E-32, *S-32);

    return 0;
}