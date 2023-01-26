/* Jos olet määritellyt float f = 8.98. 
Mitä sinun tulee laittaa  alla olevaan koodiin kohtaan __ jotta saat halutun tulostuksen (output). */
#include <stdio.h>

int main() {
    float f = 8.98;
    
    printf("Lukusi tulostettuna on %f \n", f);
    printf("Lukusi tulostettuna kokonaislukuna %i \n", (int)f);
    printf("Lukusi tulostettuna yhden desimaalin tarkkuudella %.1f \n", f);
    printf("Lukusi tulostettuna ja tallennettuna koknaislukuna oikein pyöristettynä %i \n", (int)(f+0.5));

    return 0;
}