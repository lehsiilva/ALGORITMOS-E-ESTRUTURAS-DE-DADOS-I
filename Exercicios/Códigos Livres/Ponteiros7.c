/*Implemente uma função void trocar(int *a, int *b) que troque os valores de duas variáveis usando ponteiros.*/

#include <stdio.h>

void trocar(int *a, int *b){

    printf("\nOriginal A: %d", *a);
    printf("\nOriginal B: %d", *b);

    int troca = *a;
    *a = *b;
    *b = troca;

    printf("\nTrocado A: %d", *a);
    printf("\nTrocado B: %d", *b);

}

int main(){
    int a = 5;
    int b = 7;

    trocar(&a,&b);
}