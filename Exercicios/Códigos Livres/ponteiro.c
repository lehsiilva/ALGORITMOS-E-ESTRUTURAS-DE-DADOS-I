/*Crie uma função que receba um ponteiro para um número inteiro. A função deve modificar esse número, elevando-o ao quadrado.*/

#include <stdio.h>
#include <math.h>

int num(int *x) {
    
    *x = *x * *x;

    return *x;
}


int main() {

    int x = 5;

    int resul = num(&x);

    printf("x = %d", resul);

    return 0;
}