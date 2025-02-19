/*Leia o raio de um círculo e mostrar o seu perímetro e área*/

#include <stdio.h>
#include <math.h>

int main(){
    printf("\nDígite o raio do circulo: ");
    float raio;
    scanf("%f", &raio);

    float area = 3.14 * pow(raio,2);  // a = pi* r^2
    float perimetro = 2* 3.14 * raio; //p = 2pi r

    printf("\nO perimetro do circulo é %2.f", perimetro);
    printf("\nA área do circulo é %2.f", area);


return 0;
}