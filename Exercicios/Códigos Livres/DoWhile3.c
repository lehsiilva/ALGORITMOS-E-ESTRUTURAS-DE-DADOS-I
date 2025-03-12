/*Faça um programa que leia um número inteiro e garanta que ele
é um ano bissexto.*/

#include <stdio.h>

int main(){
    int ano;

do{
    printf("\nDígite o Ano: ");
    scanf("%d",&ano);

    if(ano%4 != 0 && ano%100 != 0 && ano%400 != 0){
        printf("\nEsse ano não é Bissexto!");
    }else{
        printf("\nEsse ano é Bissexto!");
    }

}while(ano%4 != 0 && ano%100 != 0 && ano%400 != 0);


return 0;
}