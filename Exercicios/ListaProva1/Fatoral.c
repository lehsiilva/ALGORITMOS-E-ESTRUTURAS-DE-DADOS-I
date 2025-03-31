/* Implemente uma função que calcule o fatorial de um número inteiro positivo.*/

#include <stdio.h>

int fatorial(int num){

    int fatorial = 1;

    for(int i = 1; i <= num; i++){
        fatorial *= i;
    }

    return fatorial;

}

int main(){
    printf("\nDigite um numero: ");
    int num;
    scanf("%d", &num);

    int resul = fatorial(num);
    printf("\nO fatorial de %d eh: %d", num, resul);

    return 0;
}