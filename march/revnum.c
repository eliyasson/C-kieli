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