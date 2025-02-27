/*Ler um número inteiro. Se ele for par calcular e escrever o seu quadrado e se for ímpar
calcular e escrever seu cubo*/

#include <stdio.h>
#include <math.h>

int main(){
    printf("\nDígite um numero: ");
    int num;
    scanf("%d",&num);

    if(num%2 == 0){ //ele é par
        int par = pow(num,2);
        printf("\nO quadrado do número é igual a: %d", par);
    }else{
        int impar = pow(num,3);
        printf("\nO cubo do número é igual a: %d", impar);
    }



    return 0;
}