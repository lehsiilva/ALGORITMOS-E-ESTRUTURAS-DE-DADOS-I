/*Ler os coeficientes de uma equação do 2º grau, determinar e escrever suas raízes reais ou
imaginárias*/

#include <stdio.h>
#include <math.h>

int main(){
    printf("\nDígite o valor de A: ");
    float a;
    scanf("%f",&a);

    printf("\nDígite o valor de B: ");
    float b;
    scanf("%f",&b);

    printf("\nDígite o valor de C: ");
    float c;
    scanf("%f",&c);

    float delta = sqrt(pow(b,2) - 4 * (a*c));

    if(delta > 0){
        float raiz1 = (-b + delta)/(2*a);
        float raiz2 = (-b - delta)/(2*a);

        printf("\nA raiz 1 é igual a: %.2f", raiz1);
        printf("\nA raiz 2 é igual a: %.2f", raiz2);

    } else {
        printf("\nNão foi possível calcular");
    }

    return 0;
}