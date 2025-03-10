/*Faça um programa que mostre na tela os n primeiros elementos da sequência anterior que
forem divisíveis por três AND múltiplos de cinco OR divisíveis por sete*/

#include <stdio.h>

int main(){

    printf("\nDigite o numero N: ");
    int n;
    scanf("%d", &n);

    int seq = 1;

    int i = 0;

    while(i < n){
        if ((seq % 3 == 0 && seq % 5 == 0) || (seq % 7 == 0)) {
            printf("%d ", seq);
            i++; // Só incrementa o contador se o número for válido
        }
        
        seq += 2; // Próximo número ímpar
    }


    }

 
