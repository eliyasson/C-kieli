//Tee ohjemla joka tulosta kirjaimet jotka ovat numeroissa 97 – 122. Käytä for silmukka ja putchar.

#include <stdio.h>

int main() {
    int i;
    for(i = 97; i <= 122; i++) {
        putchar(i);
    }
    return 0;
}