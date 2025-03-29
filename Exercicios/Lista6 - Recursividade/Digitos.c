/*Fazer um método recursivo que conte quantos dígitos tem um determinado número. Es-
creva um programa em C que leia um número do teclado e utilize este método para contar
e exibir o número de dígitos. */
#include <stdio.h>

int digitos(int num){
    int resul;

    if(num/10 == 0){

        resul = 1;

    } else {

    resul = 1 + digitos(num/10);

    }

    return resul;
}

int main(){
    printf("\nDigite um numero: ");
    int num;
    scanf("%d", &num);

    int resul = digitos(num);
    printf("\nO numero %d tem %d digitos", num, resul);
}