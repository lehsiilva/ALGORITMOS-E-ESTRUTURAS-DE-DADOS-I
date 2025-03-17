/*Crie um programa com uma função maximo que recebe três números e retorna o maior deles.*/

#include <stdio.h>

int maximo(int a, int b,int c){

    int maior;

    if(a > b && a > c){
        maior = a;
    }else if ( b > a && b > c){
        maior = b;
    }else {
        maior = c;
    }

    return maior;
}

int main(){

   printf("\nDigite um valor: ");
   int a;
   scanf("%d", &a);

   printf("\nDigite um valor: ");
   int b;
   scanf("%d", &b);

   printf("\nDigite um valor: ");
   int c;
   scanf("%d", &c);

   int resul = maximo(a,b,c);

   printf("\nMaior é: %d", resul);


   return 0;
}