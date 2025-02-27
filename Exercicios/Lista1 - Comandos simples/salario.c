/*Ler o valor do salário mínimo e o valor do salário de uma pessoa, calcular e mostrar
quantos salários mínimos essa pessoa ganha.*/

#include <stdio.h>

int main(){

    printf("\nDígite o seu salário: ");
    float salario;
    scanf("%f", &salario);

    printf("\nDígite o seu salário minimo: ");
    float salarioMin;
    scanf("%f", &salarioMin);

    printf("\nVocê recebe %.2f salários mínimos", (salario/salarioMin));

return 0;
}