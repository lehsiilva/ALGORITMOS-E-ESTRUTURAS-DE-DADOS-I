/*Escreva uma função fatorial que calcula o fatorial de um número inteiro usando recursão.*/

#include <stdio.h>

int fatorial(int a){
    int resul;

    if(a == 1){
        resul = 1; // caso base 
    } else {
        resul = a * fatorial(a - 1);
    }

    return resul;
}

int main(){

   printf("\nDigite um valor: ");
   int a;
   scanf("%d", &a);

   int resul = fatorial(a);

   printf("\nResultado: %d", resul);

   return 0;
}