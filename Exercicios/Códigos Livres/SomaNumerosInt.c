/*Calcule a soma dos N numeros inteiros naturais
ex: n= 5; 1+2+3+4+5 = 15*/

#include <stdio.h>

int main(){

    printf("\nDigite um numero: ");
    int num;
    scanf("%d", &num);

    int soma = 0;

    for(int i = 1; i <= num; i++){
        soma+=i;
    }

    printf("\nSoma = %d", soma);
}