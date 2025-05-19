/*Escreva um programa em C que aloque dinamicamente memória para armazenar um
número inteiro, um número de ponto flutuante (‘float‘) e um caractere (‘char‘). Solicite
ao usuário que insira valores para essas variáveis e exiba-os. Libere a memória alocada
ao final do programa.*/

#include <stdio.h>
#include <stdlib.h>

void ler(int *v, float *a, char *c){

    printf("\nDigite um numero inteiro: ");
    scanf("%d", v);

    printf("\nDigite um numero decimal: ");
    scanf("%f", a);

    while (getchar() != '\n'); 

    printf("\nDigite um caracter: ");
    scanf("%c", c);

}


int main(){


    int *v = (int*)malloc(sizeof(int));
    float *a = (float*)malloc(sizeof(float));
    char *c = (char*)malloc(sizeof(char));

    ler(v,a,c);

    printf("\nConteudo de V: ");
    printf("\n%d", *v);

    printf("\nConteudo de A: ");
    printf("\n%.2f", *a);

    printf("\nConteudo de C: ");
    printf("\n%c", *c);


    free(v);
    free(a);
    free(c);

}