/*Crie uma função que duplica o conteudo dda memoria apontada por um ponteiro p*/

#include <stdio.h>

void duplica(int *x){

    *x = *x * 2;
}

int main(){
    int x = 5;

    duplica(&x);

    printf("\nDuplicado: %d", x);

}