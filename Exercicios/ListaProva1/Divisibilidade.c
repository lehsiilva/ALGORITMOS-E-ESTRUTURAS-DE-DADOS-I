/*Crie um programa que leia dois números e verifique se o primeiro é divisível pelo segundo.*/

#include <stdio.h>

int main(){
    printf("\nDigite um numero: ");
    int num1;
    scanf("%d", &num1);

    printf("\nDigite um numero: ");
    int num2;
    scanf("%d", &num2);

    if(num1 % num2 == 0){
        printf("\nO numero %d eh divisivel por %d", num1, num2);
    }else{
        printf("\nO numero %d nao eh divisivel por %d", num1, num2);
    }

    return 0;

}