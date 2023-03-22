//Tee parempi laskukone, joka kysyy  luvun ja laskentaanko sen potenssi, neilöjuuri vai itseisarvo?

#include <stdio.h>
#include <math.h>

int main() {
    char operaation, v;
    double num;
    
    do {
        printf("Minkä operaation haluat tehdä? pontenssiin2(p), neliojuuri(n), itseisravo(i) ?\n");
        scanf(" %c", &operaation);
        
        printf("\nAnna luku: ");
        scanf("%lf", &num);
        
        switch(operaation) {
            case 'p':
                printf("\nLuvun toinen potenssi on %.2lf", pow(num,2));
                break;
            
            case 'n':
                if (num > 0){
                    printf("\nLuvun neljäsjuuri %.2lf", sqrt(num));
                } else {
                    printf("Virhe");
                }
                break;
            
            case 'i':
            printf("\nLuvun itseisarvo on %.2lf", fabs(num));
            break;
            
            default:
            printf("Virhe!");
            break;
        }
        printf("\nJatketaanko laskemista (k/e)? ");
        scanf(" %c", &v);
    } while (v == 'k');
    printf("kiitos käyttämisen");
    
    
    return 0;
};