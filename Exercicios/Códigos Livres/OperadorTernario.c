/*Faça um programa que leia dois números a e b e mostre o maior deles na tela. Resolva usando o if ou ef/else e, depois, resolva usando o operador ternário.*/

#include <stdio.h>

int main(){

    printf("\nDigite o primeiro numero: ");
    int num1;
    scanf("%d", &num1);

    printf("\nDigite o segundo numero: ");
    int num2;
    scanf("%d", &num2);

    int maior = (num1 > num2) ? num1 : num2; // if invisivel no inicio, ? - atribua x a variavel, : - se não

    printf("\nO maior número é: %d", maior);

   
    
return 0;
}