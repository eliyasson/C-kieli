//Tee ohjelma joka kertoo onko annettu päivä arki vai viikonloppu vai perjantai.

#include <stdio.h>
#include <string.h>

int main() {
    char day[3];

    printf("Anna viikonpäivä (ma, ti, ke, to, pe, la, su)? ");
    scanf("%s", day);

    if (strcmp(day, "ma") == 0 || strcmp(day, "ti") == 0 || strcmp(day, "ke") == 0 || strcmp(day, "to") == 0) {
        printf("On arki\n");
    } else if (strcmp(day, "pe") == 0) {
        printf("Thank God it's Friday!\n");
    } else {
        printf("On VIIKONLOPPU!\n");
    }

    return 0;
}