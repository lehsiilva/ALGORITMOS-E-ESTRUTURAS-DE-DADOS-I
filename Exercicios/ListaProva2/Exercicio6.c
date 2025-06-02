/*Declaração e Manipulação:
Declare um vetor de 10 inteiros.
Inicialize as posições pares com o valor do índice e as posições ímpares com o dobro do índice.
Imprima o vetor resultante.*/

#include <stdio.h>

int main(){

    int v[10];

    printf("\nVetor resultante: \n");
    for(int i = 0; i < 10; i++){
        
        if(i%2 == 0){
            v[i] = i;
        }else{
            v[i] = i*2;
        }

        printf("%d ", v[i]);
    }

    return 0;


}