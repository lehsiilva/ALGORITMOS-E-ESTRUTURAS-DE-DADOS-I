/* Crie um programa que leia um caractere e informe se é um dígito (0-9) ou uma letra (a-z, A-Z).*/

#include <stdio.h>

int main(){

    printf("\nDigite um caracter: ");
    char a;
    scanf(" %c", &a);

    if((a >= '0') && (a <= '9')){
        printf("\nEh um numero");
        
    }else if ( ((a >= 'a') && (a <= 'z')) || ((a >= 'A') && (a <= 'Z')) ) {
        printf("\nEh uma letra");
    }else{
        printf("\nEh um caracter especial");
    }

    return 0;


}