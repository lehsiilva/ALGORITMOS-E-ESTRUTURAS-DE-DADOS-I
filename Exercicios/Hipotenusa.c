/*Faça um programa que calcule a hipotenusa de um triangulo retangulo h= raiz de c^2+c2^2*/

#include <stdio.h>
#include <math.h>

int main(){
    printf("\nDigite o valor do Cateto 1: ");
    float cateto1;
    scanf("%f", &cateto1);

    printf("\nDigite o valor do Cateto 2: ");
    float cateto2;
    scanf("%f", &cateto2);

    float hipotenusa = sqrt(pow(cateto1,2)+ pow(cateto2,2));
    
    printf("\nO valor da hipotenusa é: %.2f ", hipotenusa);


return 0;
}