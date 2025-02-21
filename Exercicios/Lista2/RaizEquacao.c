/*Ler os coeficientes de uma equação do primeiro grau (ax + b = 0), calcular e escrever a
raiz da equação*/  //a e b sao valores reais e x é a icognita.

#include <stdio.h>
#include <math.h>

int main(){
    printf("\nDígite o valor de A: ");
    float a;
    scanf("%f",&a);

    printf("\nDígite o valor de B: ");
    float b;
    scanf("%f",&b);

    float x = 0;

    if(a != 0){
        x = -b / a; 
        printf("\nO valor de X encontrado é:%.2f ", x);
    } else {
        printf("\nO valor de X não pode ser encontrado pois A deve ser diferente de 0");
    }

    return 0;
}