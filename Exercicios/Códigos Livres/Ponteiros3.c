/*Crie uma função que receba dois ponteiros para inteiros. A função deve retornar o produto (multiplicação) dos dois valores apontados.*/

#include <stdio.h>


int produto(int *x, int *y){

    int multiplica = *x * *y;

    return multiplica;

}

int main(){
    int x = 5;
    int y = 10;

    int resul = produto(&x,&y);

    printf("\nProduto: %d", resul);
}