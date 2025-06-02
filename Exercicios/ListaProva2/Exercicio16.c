/*Implemente uma função que troque o valor de duas variáveis usando ponteiros.*/

#include <stdio.h>

void troca(int *a, int *b){

    int troca = *a;
    *a = *b;
    *b = troca;
}

int main(){

    int a  = 5;
    int b = 10;

    printf("\nAntes da troca: \n");
    printf("%d ",a);
    printf("%d",b);

    troca(&a,&b);

    printf("\nDepois da troca: \n");
    printf("%d ",a);
    printf("%d",b);

}