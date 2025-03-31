/*Faça um programa que converta um caractere minúsculo para maiúsculo e vice-versa.*/

#include <stdio.h>
#include <ctype.h>

int main(){

    printf("\nDigite uma letra: ");
    char a;
    scanf(" %c", &a);

    if(a == toupper(a)){
        printf("%c", tolower(a));
    }else{
        printf("%c", toupper(a));
    }

    return 0;


}