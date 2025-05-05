/*Faaça uma unica função que converte um valor em metros para: (i)jardas;(ii) pes; e (iii)polegadas. Use a função no metodo main*/

#include <stdio.h>

void converter(double *x){

    *x = *x * 1.09361; //jardas
    printf("\nJardas: %.4lf", *x);

    *x = *x * 3.28084; //pes
    printf("\nPes: %.4lf", *x);

    *x = *x * 393701; //polegadas
    printf("\nPolegadas: %.4lf", *x);
}

int main(){
    double x = 1;

    converter(&x);

}