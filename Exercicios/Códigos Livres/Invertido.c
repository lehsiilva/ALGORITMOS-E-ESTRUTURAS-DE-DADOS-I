/*Escreva o numero invertido com interatividade. Exemplo: 1234 saida 4321*/

#include <stdio.h>

void invertido(int n){
    int resto = 0;
    
    while(n > 0){
        resto = n%10;
        printf("%d", resto);

        n/=10;
    }
}

int main(){
    printf("\nDigite um numero: ");
    int n;
    scanf("%d", &n);

    invertido(n);

    return 0;
}