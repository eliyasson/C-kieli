//Tee ohjelma, joka pyytää luvun ja kertoo onko se alkuluku. 
//Ohjelma myös kysyy haluaako käyttäjä jatkaa alkulukujen tutkimista vai lopettaa.

#include <stdio.h>

int main() {
    
    int luku;
    char vastaus;
 
    
    do {
        printf("Anna luku: ");
        scanf("%d", &luku);
        
        int isPrime = 1;
        for (int j = 2; j <= luku/2; ++j){
            if(luku % j == 0){
                isPrime = 0;
                break;
            }
        }
            
        if (isPrime == 1) {
            printf("%d on alkuluku\n", luku);
        } else {
            printf("%d ei ole alkuluku\n", luku);
        }
        
        printf("Tutkitko lisää?(k/e) ");
        scanf(" %c", &vastaus);
        
    } while (vastaus == 'k');
    
    printf("Lopetit\n");
    return 0;
}
