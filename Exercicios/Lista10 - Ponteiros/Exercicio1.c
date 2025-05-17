/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro,
real, e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada
variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.*/

#include <stdio.h>

int main(){

    int a = 5;
    double b = 10.00;
    char c = 'P';
    int *p1;
    double *p2;
    char *p3;

    p1 = &a;
    p2 = &b;
    p3 = &c;

    printf("\nAntes da modificação:\n");

    printf("\n%d", *p1);
    printf("\n%.2lf", *p2);
    printf("\n%c", *p3);

    *p1 = 10;
    *p2 = 20.00;
    *p3 = 'Q';

    printf("\nDepois da modificação:\n");

    printf("\n%d", *p1);
    printf("\n%.2lf", *p2);
    printf("\n%c", *p3);

    return 0;

}