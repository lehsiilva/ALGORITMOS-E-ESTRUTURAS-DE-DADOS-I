/* Leia 3 números inteiros e selecione o maior e o menor e imprima os seus respectivos valores na tela*/

#include <stdio.h>

int main(){
    printf("\nDigite 3 valores: ");

    printf("\nDigite o primeiro valor: ");
    int a;
    scanf("%d", &a);

    printf("\nDigite o segundo valor: ");
    int b;
    scanf("%d", &b);

    printf("\nDigite o terceiro valor: ");
    int c;
    scanf("%d", &c);

    int maior;
    int menor;

    //Números maiores
    if(a > b && a > c){
        maior = a;
    } else if (b > a && b > c){
        maior = b;
    }else{
        maior = c;
    }

    //Números menores
    if(a < b && a < c){
        menor = a;
    } else if (b < a && b < c){
        menor = b;
    }else{
        menor = c;
    }

    printf("\nO maior número é %d ", maior);
    printf("\nO menor número é %d ", menor);

return 0;
}