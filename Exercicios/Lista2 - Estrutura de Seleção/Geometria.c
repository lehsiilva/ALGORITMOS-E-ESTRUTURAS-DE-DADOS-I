/*Ler um número inteiro.
• Se ele for 1 ou 2, ler as medidas dos lados de um retângulo, calcular e escrever a área
do círculo circunscrito a este retângulo.
• Se for 3 ou 4 ou 5, ler a medida do raio de um círculo. Calcular e escrever a área do
quadrado inscrito no mesmo.
• Se for outro número inteiro que não estes, ler a medida do lado de um quadrado,
calcular e escrever a área da coroa circular formada pelo círculo inscrito e circunscrito
a este quadrado.*/

/*Círculo Circunscrito a um Retângulo:

O raio do círculo circunscrito a um retângulo é a metade da diagonal do retângulo.
Diagonal retangulo = raiz de lado1^2 + lado2 ^2
Diagonal do circulo = diagonal/2
Area = PI * r^2 */

/*Quadrado Inscrito em um Círculo:

A diagonal do quadrado é igual ao diâmetro do círculo.
Diagonal quadrado = 2*raio
Lado quadrado = diagonal/ raiz de 2
Area = ladoquadrado^2 */

/*Coroa Circular em um Quadrado:

O raio do círculo circunscrito ao quadrado:
raio circunscrito = lado/raiz de 2
raio inscrito = lado/2
Area do circulo = PI* raio circunscrito^2
Area do circulo = PI* raio quadrado^2
Area da coroa = areaCircunscrito - areaInscrito */

#include <stdio.h>
#include <math.h>

int main(){
    printf("\nDígite um numero: ");
    int num;
    scanf("%d",&num);

    float pi = 3.14;

    if(num == 1 || num ==2){
        printf("\nDigite o primeiro lado: ");
        float lado1;
        scanf("%f", &lado1);

        printf("\nDigite o segundo lado: ");
        float lado2;
        scanf("%f", &lado2);

        float diagonalRetangulo = sqrt(pow(lado1,2)+pow(lado2,2));
        float raio = diagonalRetangulo/2;
        float area = pi * pow(raio,2);

        printf("\nA area do círculo circunscrito em um retangulo é: %.2f", area);

    }else if(num == 3 || num ==4 || num ==5){
        printf("\nDigite o raio: ");
        float raio;
        scanf("%f", &raio);
        float diagonalQuadrado = 2*raio;
        float ladoQuadrado = diagonalQuadrado/ sqrt(2);
        float area = pow(ladoQuadrado,2);
        printf("\nA area do círculo circunscrito em um quadrado é: %.2f", area);

    }else{
        printf("\nDigite o valor do lado: ");
        float lado;
        scanf("%f", &lado);

        float raioCircunscrito = lado/sqrt(2);
        float raioInscrito = lado/2;
        float areaCircunscrito = pi* pow(raioCircunscrito,2);
        float areaInscrito = pi* pow(raioInscrito,2);
        float areaCoroa = areaCircunscrito - areaInscrito;

        printf("\nA área da coroa circular formada no quadrado é: %.2f", areaCoroa);

    }



    return 0;
}
