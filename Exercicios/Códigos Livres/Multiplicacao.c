/*Crie uma função chamada multiplicacao que recebe dois números e retorna o produto deles.*/

#include <stdio.h>

int multiplicacao(int a, int b){
    int resul = a*b;

    return resul;
}

int main(){

   printf("\nDigite um valor: ");
   int a;
   scanf("%d", &a);

   printf("\nDigite um valor: ");
   int b;
   scanf("%d", &b);

   int resul = multiplicacao(a,b);

   printf("\nResultado: %d", resul);


   return 0;
}