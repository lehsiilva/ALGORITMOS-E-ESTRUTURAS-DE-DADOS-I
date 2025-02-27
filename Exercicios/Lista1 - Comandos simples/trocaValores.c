/*Ler dois números reais e salvá-los nas variáveis A e B. Em seguida, troque os valores
das duas variáveis de forma que a variável A passe a ter o valor da variável B e
vice-versa. No final, mostre os valores finais.*/

#include <stdio.h>

int main(){
    printf("\nDigite dois valores: ");

    printf("\nDigite o primeiro valor: ");
    float num1;
    scanf("%f", &num1);
    
    printf("\nDigite o segundo valor: ");
    float num2;
    scanf("%f", &num2);

    float troca;

    troca = num1;
    num1 = num2;
    num2 = troca;

    printf("\nNúmeros trocados: %.2f %.2f",num1,num2);



return 0;
}