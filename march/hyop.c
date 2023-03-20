//Tee ohjelma laskee suorakulmaisen kolmion hypotenuusan C pituuden, kun kaksi kateettia a ja b on tiedossa.

#include <stdio.h>

int main() {
    double a, b, c;
    
    printf("Anna kolmoin lyhyempien sivujen a ja b pituudet: ");
    
    scanf("%lf %lf", &a, &b);
    
    //c = sqrt(pow(a, 2) + pow(b, 2));
    c = sqrt(a*a + b*b);
    
    printf("\nHypotenuusa on %lf", c);

    return 0;
}