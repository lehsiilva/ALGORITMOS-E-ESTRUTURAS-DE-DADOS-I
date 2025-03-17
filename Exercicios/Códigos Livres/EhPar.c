/*Faça uma função chamada ehPar que recebe um número inteiro e retorna 1 se for par e 0 se for ímpar.*/

#include <stdio.h>

int EhPar(int a){
    int resul;

    if(a%2 == 0){
        resul = 1;
    } else {
        resul = 0;
    }

    return resul;
}

int main(){

   printf("\nDigite um valor: ");
   int a;
   scanf("%d", &a);

   int resul = EhPar(a);

    if(resul == 1){
    printf("\nEh Par");
    }else{
    printf("\nEh Impar");
    }

   return 0;
}