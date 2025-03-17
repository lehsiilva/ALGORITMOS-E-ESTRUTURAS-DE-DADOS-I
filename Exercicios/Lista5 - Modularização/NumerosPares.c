/*Fazer uma função int par(int n) que recebe um número inteiro n e retorna o n-ésimo
termo da sequência 2, 4, 6, 8, 10, 12, . . */

#include <stdio.h>

int EhPar(int n){
    
    int resul = 2 * n;

    return resul;
}

int main(){

   printf("\nDigite um valor: ");
   int n;
   scanf("%d", &n);

   int resul = EhPar(n);

   printf("\nO termo %d da sequencia é: %d", n, resul);
   return 0;
}