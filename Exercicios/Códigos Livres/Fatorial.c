/*Faça uma progressão que calcule o fatorial de um numero
ex: n = 5, 5! = 5 * 4 * 3 * 2 * 1 */



#include <stdio.h>

int main(){

    printf("\nDigite um numero: ");
    int num;
    scanf("%d", &num);

    int fatorial = 1;

    for(int i = num; i > 1; i--){

        fatorial *= i;
    }

    printf("\nFatorial de %d e: %d ",num,fatorial);
}