/*Tee ohjelma, joka kertoo neliön muotoisen tontin koon  kun tiedetään sen sivun.  
Ohjelma kysyy ensin sivun ja sitten  käyttäjältä haluaako tämä vatauksen neliöinä vai hehtaareina, 
ja tulostaa oikean vastauksen.  Käytä switciä sekä pow()-funktiota.

1 ha = 10 000 m²*/

#include <stdio.h>
#include <math.h>

int main() {
    float sivu, ala, ha;
    char v1, v2;
    do {
        printf("Syötä tontin sivun pituus: ");
        scanf("%f", &sivu);

    
        ala = pow(sivu, 2);
        ha = ala/10000;
        printf("Haluatko tuloksen neliöinä vai hehtaareina? (n/h): ");
        scanf(" %c", &v1);

 
        switch (v1) {
            case 'n':
                printf("Tontin koko on %.2f neliömetriä.\n", ala);
                break;
            case 'h':
                printf("Tontin koko on %.2f hehtaaria.\n", ha);
                break;
            default:
                printf("Virheellinen valinta.\n");
        }
        printf("\nJatketaanko laskemista (k/e)? ");
        scanf(" %c", &v2);
    } while (v2 == 'k');
    printf("kiitos käyttämisen");
    

    return 0;
}
