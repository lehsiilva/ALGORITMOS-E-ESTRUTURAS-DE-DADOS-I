/*Faça um programa que leia um caractere e se esse for uma letra maiúscula, imprima
“Maiúscula”. Senão, se ele for uma letra minúscula, imprima “Minúscula”. Senão, se for
um dígito, imprima dígito. Senão imprima “Outro caractere”. (Sem utilizar bibliotecas
que não foram vistas em sala de aula)*/

#include <stdio.h>

int main(){

    printf("\nDigite um caracter: ");
    char caracter;
    scanf("%c", &caracter);

    int conversao = caracter;

        
    if(conversao >= 65 && conversao <= 90){
        printf("\nMAIUSCULO");

    } else if (conversao >=97 && conversao <= 122) {
        printf("\nMinusculo");

    } else if (conversao >= '0' && conversao <='9') {
        printf("\nDigito");

    } else {
        printf("\nOutro caracter");
    }

}
