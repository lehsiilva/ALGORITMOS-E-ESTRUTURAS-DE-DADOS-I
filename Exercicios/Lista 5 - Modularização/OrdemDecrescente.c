/*Fazer uma função void mostrarParesEmOrdemDecrescente(int n) que recebe um número
inteiro n e mostra na tela (em ordem decrescente) todos os valores menores que n para
a sequência do exercício anterior. A sua função mostrarParesEmOrdemDecrescente deve
utilizar a função par desenvolvida na questão anterior*/

#include <stdio.h>


int par(int n) {
    int resul = 2 * n; 
    return resul; 
 }

 void mostrarParesEmOrdemDecrescente(int n){
    
    int verifica = par(n);

    printf("\nNumeros pares menores que %d na sequência:\n", verifica);

    for(int i = verifica-2;i > 0 ; i-=2){
        printf("%d ",i);
    }
   
}

 
 int main() {
     printf("\nDigite qual numero da sequencia voce deseja verificar: ");
     int n;
     scanf("%d", &n);
 
     int resul = par(n);
     printf("\nO %dº termo da sequência é: %d\n", n, resul);

     mostrarParesEmOrdemDecrescente(n);
 
     return 0;
 }