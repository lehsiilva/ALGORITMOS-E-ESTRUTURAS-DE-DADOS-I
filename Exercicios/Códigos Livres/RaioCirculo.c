/*Calcule a area do circulo se raio for > 0*/

#include <stdio.h>
#include <math.h>

int main(){
    printf("\nDígite o raio: ");
    float raio;
    scanf("%f", &raio);

    float area = 3.14 * pow(raio,2);

    printf("\nA area do circulo é: %f", area);

}
