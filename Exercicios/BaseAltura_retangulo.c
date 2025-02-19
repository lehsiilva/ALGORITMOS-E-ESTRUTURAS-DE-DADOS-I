/*Faça um programa para ler a base e altura de um retângulo e mostrar seu perímetro, área e diagonal*/

#include <stdio.h>
#include <math.h>

int main(){
    printf("\nDígite a base do retângulo: ");
    float base;
    scanf("%f", &base);

    printf("\nDígite a altura do retângulo: ");
    float altura;
    scanf("%f", &altura);

    float perimetro = (2*base)+ (2*altura);  //o retangulo inteiro
    float area = base*altura;
    float diagonal= sqrt(pow(base,2)+ pow(altura,2)); // d^2 = raiz de base^2+altura^2
   
    printf("\nO perímetro é igual a: %.2f ", perimetro);
    printf("\nA area é igual a: %.2f ", area);
    printf("\nA diagonal é igual a: %.2f ", diagonal);

return 0;
}