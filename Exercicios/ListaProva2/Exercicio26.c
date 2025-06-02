/*Implemente um programa que aloque dinamicamente um array de 10 números inteiros.
Preencha o array com valores de 1 a 10 e, em seguida, imprima esses valores. Libere a
memória ao final.*/

#include <stdio.h>
#include <stdlib.h>

void ler(int *m){

    for(int i = 0; i < 10; i++){

        *(m + i) = i + 1;

    }

    printf("\nVetor preenchido: \n");
    for(int j = 0; j < 10; j++){

        printf("%d ",*(m + j));

    }

    
}



int main(){

    int *v = (int*)malloc(10 * sizeof(int));

    ler(v);

    free(v);

    return 0;
}