/*Faça um programa que leia um número inteiro, garanta que o
mesmo está entre 1 e 12 e escreva o nome do mês correspondente.
Use o comando switch-case.*/
#include <stdio.h>

int main(){
    printf("\nDigite o primeiro valor: ");
    int num;
    scanf("%d", &num);

    if((num < 1) || (num > 12)){
        printf("\nMês Invalido");
    }else {
    switch (num)
    {
    case 1:
        printf("\nJaneiro");
        break;
    case 2:
        printf("\nFevereiro");
        break;
    case 3:
        printf("\nMarço");
        break;
    case 4:
        printf("\nAbril");
        break;
    case 5:
        printf("\nMaio");
        break;
    case 6:
        printf("\nJunho");
        break;
    case 7:
        printf("\nJulho");
        break;
    case 8:
        printf("\nAgosto");
        break;
    case 9:
        printf("\nSetembro");
        break;
    case 10:
        printf("\nOutubro");
        break;
    case 11:
        printf("\nNovembro");
        break;
    
    default:
        printf("\nDezembro");
        break;
    }
}
    


    return 0;
}