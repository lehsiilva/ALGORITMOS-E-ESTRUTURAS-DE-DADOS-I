/*Fazer uma função void mostrarParesEmOrdemDecrescente(int n) que recebe um número
inteiro n e mostra na tela (em ordem decrescente) todos os valores menores que n para
a sequência do exercício anterior. A sua função mostrarParesEmOrdemDecrescente deve
utilizar a função par desenvolvida na questão anterior*/

#include <stdio.h>

int EhPar(int n){
    
    int resul = 2 * n;

    return resul;
}

void mostrarParesEmOrdemDecrescente(int n){
    
    int par = EhPar(n);

    for(int i = par; i >= 0; i -= 2 ){
       
        printf("\nSequencia: %d ", i);
    }
}


int main(){

   printf("\nDigite um valor: ");
   int n;
   scanf("%d", &n);

   int resul = EhPar(n);

   printf("\nO termo %d da sequencia é: %d", n, resul);

   mostrarParesEmOrdemDecrescente(n);

   return 0;
}