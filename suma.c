/*Tee laskukone, joka laskee joko summan tai tulon kahdesta luvusta - kysyy käyttäjältä kumpi. 
Kone kysy jatketaanko laskemista vai lopetetaanko ja toimii vastauksen mukaan.*/

#include <stdio.h>

int main() {
    int  num1, num2;
    char v1, v2;
    char sum, tulo;
    
    do {
        printf("Anna kaksi kokonaislukua: ");
        scanf("%d %d", &num1, &num2);
    
        printf("Summa vai Tulo? (+ tai *) ");
        scanf(" %c", &v1);
      
        if(v1 == '+'){
            sum = num1 + num2;
            printf("Sum is %d\n", sum);
        } else if(v1 == '*') {
            tulo = num1 * num2;
            printf("Sum is %d\n", tulo);
        };
       
        printf("Jatketaanko laskemista? (k tai e): ");
        scanf(" %c", &v2);
        getchar();
        
    } while (v2 == 'k' );
    printf("Lopetit laskemisen");
    
    
  
    return 0;
}