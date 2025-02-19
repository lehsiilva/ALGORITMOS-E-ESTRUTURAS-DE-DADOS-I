/*Ler três números reais a, b e c e mostrar o valor de y sendo y = a + b/
c+a + 2 ∗ (a − b) + log2(64).*/

#include <stdio.h>
#include <math.h>

int main(){
    printf("\nDigite três números: ");

    printf("\nDigite o primeiro número: ");
    float a;
    scanf("%f", &a);

    printf("\nDigite o segundo número: ");
    float b;
    scanf("%f", &b);

    printf("\nDigite o terceiro número: ");
    float c;
    scanf("%f", &c);

    float soma = c + a;
    float subtracao = a-b;

    float y = a + (b/soma) + 2*subtracao + log2(64);

    printf("\nO valor de Y é: %.2f", y);


return 0;
}