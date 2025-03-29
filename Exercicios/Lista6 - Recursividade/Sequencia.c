/*Escreva um programa em C para imprimir números pares ou ímpares em um determinado
intervalo usando recursão.*/

#include <stdio.h>

void pares(int n){

    if(n == 2){

        printf("%d ", n);

    }else{

        pares(n-1);

        if(n %2 == 0){

            printf("%d ", n);
        }
    }

}

void Impares(int n){
   
    if(n == 1){

        printf("%d ", n);

    }else{

        Impares(n-1);

        if(n %2 == 1){

            printf("%d ", n);
        }
    }

}

int main(){
    printf("\nDigite o valor de N: ");
    int n;
    scanf("%d", &n);

    printf("Pares\n");
    pares(n);
    
    printf("\nImpares\n");
    Impares(n);
   
    return 0;
}

