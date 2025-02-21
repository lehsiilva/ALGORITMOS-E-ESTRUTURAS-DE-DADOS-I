/*Fazer um programa para ler dois números inteiros e calcular e imprimir a diferença desses
números. Depois, se o segundo número for diferente de zero, fazer a divisão do primeiro
pelo segundo.*/

#include <stdio.h>

int main(){
    printf("\nDígite o primeiro número: ");
    int num1;
    scanf("%d",&num1);

    printf("\nDígite o segundo número: ");
    int num2;
    scanf("%d",&num2);

    int diferenca = num1 - num2;

    printf("\nA diferença é de: %d", diferenca);

    if(num2 != 0){
        int resul = num1/num2;
        printf("\nO resultado da divisão é: %d",resul);
    }

    return 0;
}