/*Faça um programa para ler um número inteiro n e mostrar na tela os n primeiros termos da sequência 1, 5, 12, 16, 23, 27, 34, ... que sejam divisíveis por dois e não divisíveis por três*/
#include <stdio.h>

int main(){

    printf("\nDigite quantos numeros voce deseja ler: ");
    int num;
    scanf("%d", &num);

    int sequencia = 1;
    
    int i = 0;

    printf("%d ", sequencia);

    while(i < num-1){
        sequencia+=4;
        printf("%d ", sequencia);

        sequencia+=7;
        printf("%d ", sequencia);

    i++;
    }
  
}
        
