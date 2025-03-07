/*Fazer um programa para ler n números inteiros e imprimir a soma deles. O n valor de
deve ser lido do teclado.*/

#include <stdio.h>

int main(){

    printf("\nDigite a quantidade de numeos que você deseja somar: ");
    int n;
    scanf("%d", &n);

    int num;
    int soma = 0;

    int i = 1;

    while(i <= n){

        printf("\nDigite o %d numero: ", i);
        scanf("%d", &num);

        soma += num;

        i++;
    }

    printf("\nA soma dos Números é: %d", soma);

    return 0;
}