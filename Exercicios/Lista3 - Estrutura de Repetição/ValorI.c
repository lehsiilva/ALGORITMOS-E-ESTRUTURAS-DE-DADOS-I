/*Leia um número inteiro I e um número real R. Enquanto I maior que 10, imprima o
valor de I na tela, decremente o valor de I em duas unidades e enquanto R menor que
10, imprima os valores de R e I na tela e incremente o valor de R em uma unidade.*/

#include <stdio.h>

int main(){

    printf("\nDigite o numero I: ");
    int i;
    scanf("%d", &i);

    printf("\nDigite o numero R: ");
    float r;
    scanf("%f", &r);

    
    while(i > 10){
        printf("%d", i);
        i-=2;
            
    }
     
    
    while(r < 10){
        printf("%.2f %d", r, i);
        r++;
    }
    
    return 0;
}