//Tee ohjelma, joka tulostaa aakkoset a -z. Käytä while- tai do-while-silmukkaa. 
//Kysy joka kirjaimen jälkeen haluaako käyttäjä jatkaa. 

#include <stdio.h>

int main() {
    char merkki = 'a';
    char v;
    
    do {
        printf(" %c ", merkki);
        merkki++;
        printf("\nHaluatko jatkaa? (k/e): ");
        scanf(" %c", &v);
        getchar();
    } while (merkki <= 'z' && v == 'k');
    printf("\nOhjelma loppui.\n");
    
    return 0;
}