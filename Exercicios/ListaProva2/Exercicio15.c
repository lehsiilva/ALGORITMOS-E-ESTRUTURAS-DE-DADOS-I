/*Escreva uma função que receba um ponteiro para inteiro e modifique o valor apontado para o dobro.*/

#include <stdio.h>

void dobro(int *a){
    
    *a = *a * 2;
}

int main(){

    int a = 5;

    dobro(&a);

    printf("%d",a);

    return 0;
}