/*Crie um programa que declare uma variável inteira, um ponteiro para inteiro, e mostre o valor e o endereço da variável usando o ponteiro.*/

#include <stdio.h>

int main(){
    int x = 5;
    int *a = &x;

    printf("\nValor: %d", *a);
    printf("\nEndereco : %p", a);
}