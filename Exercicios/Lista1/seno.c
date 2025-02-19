/*Escreva um programa que imprima na tela os senos de 3,14 e de 4,13. Não se preocupe,
boa parte desse código é novidade para você! No entanto, não é muito difícil deduzir
quais operações você precisa alterar (e criar) para imprimir os valores dos senos pedidos
nesta questão. Dica: Incluir a biblioteca <math.h> e usar a função sin() para calcular o
seno.*/

#include <stdio.h>
#include <math.h>

int main(){

    float senA = 3.14;
    float senB = 4.13;

    printf("O seno de %.2f é: %.2f: \n", senA, sin(senA));
    printf("O seno de %.2f é: %.2f: ", senB, sin(senB));

return 0;
}