/*Fazer uma função que recebe um número inteiro n e imprima os n primeiros múltiplos de
5*/

#include <stdio.h>

void multiplos(int n){

    for(int i = 1; i <= n; i++ ){
        int termo = 5*i;
        printf("%d ",termo);
    }
}


int main(){

    printf("Digite qual termo voce deseja descobrir: ");
    int n;
    scanf("%d", &n);
    
    multiplos(n);

    return 0;
}