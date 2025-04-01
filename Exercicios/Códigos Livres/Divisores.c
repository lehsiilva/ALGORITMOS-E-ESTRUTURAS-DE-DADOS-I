/*Imprima todos os divisores de n em ordem crescente.*/

#include <stdio.h>

int main(){
    printf("\nDigite um numero: ");
    int n;
    scanf("%d", &n);

    int i = 1;

    int divisor;

    while(i <= n){

        if(n % i == 0){
            divisor = i;
        
            printf("%d ", divisor);
        }

        i++;

    }

}