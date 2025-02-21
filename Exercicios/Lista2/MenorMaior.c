/*Ler dois valores reais, determinar e escrever o menor e o maior.*/

#include <stdio.h>

int main(){
    printf("\nDígite o primeiro valor: ");
    double num1;
    scanf("%lf", &num1);

    printf("\nDígite o segundo valor: ");
    double num2;
    scanf("%lf", &num2);

    double maior;
    double menor;

    if(num1 > num2){
        maior = num1;
        menor = num2;
    } else {
        maior = num2;
        menor = num1;
    }

    printf("\nO maior número é: %.2lf", maior);
    printf("\nO menor número é: %.2lf", menor);

    return 0;
}