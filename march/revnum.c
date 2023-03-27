/*Tee ohjelma, joka kertoo onko luku taikanumero. Ohjelmassa käyttää funktioita  int reversnum(int i) ja
int sumnumd(int i). Kirjoita myös nämä funktiot.
*/

#include <stdio.h>
    
int reversnum(int i){
    int revnum = 0;
    
    while (i > 0) {
        revnum = (revnum*10)+ (i%10);
        i = i /10;
    }
    return revnum;
}

int main() {
    printf("%i", reversnum(456));
    
    return 0;
};

/*Taikanumero on numero, jonka yksittäisten lukujen summa kerrottuna tämän summan käännetyillä luvilla on sama kuin itse luku.  

Esimerkiksi 1729 on taikanumero. Sen  yksittäisten lukujen summa on 1+7+2+9 = 19. 
Käännettynä tämä numero on 91. Näiden kahden tulo on 19 * 91 = 1729.  
*/
#include <stdio.h>

int reversnum(int i) {
    int revnum = 0;
    while (i > 0) {
        revnum = (revnum * 10) + (i % 10);
        i = i / 10;
    }
    return revnum;
}

int sumnumd(int i) {
    int sum = 0;
    while (i > 0) {
        sum = sum + (i % 10);
        i = i / 10;
    }
    return sum;
}

int main() {
    int luku;
    printf("Anna luku: ");
    scanf("%d", &luku);

    if (reversnum(sumnumd(luku) * sumnumd(luku)) == luku) {
        printf("TAIKALUKU!");
    } else {
        printf("ei ole");
    }

    return 0;
};