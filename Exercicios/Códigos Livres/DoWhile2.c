/*Leia um número inteiro e garante que ele representa um mês
válido.*/

#include <stdio.h>

int main(){

    int num;

    do{
        printf("\nDígite um número: ");
        scanf("%d",&num);

        if(num < 1 || num > 12){
            printf("\nInvalido");
        }

    }while(num < 1 || num > 12);


    return 0;
}