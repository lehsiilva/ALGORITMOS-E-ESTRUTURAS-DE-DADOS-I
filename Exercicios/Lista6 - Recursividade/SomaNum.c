/*Escreva um programa em C para encontrar a soma dos dígitos de um número usando
recursão. exemplo 25 = 2+5 = 7*/

#include <stdio.h>

int somaNum(int num) {
    int resul;
    
    if (num < 10) {
        resul= num;
    }
    else {
        
        resul= (num % 10) + somaNum(num / 10);
    }

    return resul;
}

int main(){
    printf("\nDigite um numero: ");
    int num;
    scanf("%d", &num);

    int resul = somaNum(num);
    printf("\nA soma do numero %d é: %d", num, resul);
}
