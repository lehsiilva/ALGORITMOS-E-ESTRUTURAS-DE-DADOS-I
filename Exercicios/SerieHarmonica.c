/*Uma serie harmonica que é definida por H(n) = 1 + 1/2 +....1/n. Faça um programa que leia n e calcule H(n)*/

#include <stdio.h>

int main(){

    printf("\nQual o valor de N? ");
    int n;
    scanf("%d", &n);

    float soma = 0.0;

    for(int i = 1; i <= n; i ++){

        soma += 1.0 / i;
        
    }

    printf("\nH(%d) = %.2f ",n, soma);

    return 0;
}