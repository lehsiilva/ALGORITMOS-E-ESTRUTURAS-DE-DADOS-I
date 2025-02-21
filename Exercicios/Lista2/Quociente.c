/*Ler dois valores reais. Calcular e escrever o quociente do primeiro pelo segundo se este
for diferente de zero.*/

#include <stdio.h>

int main(){
    printf("\nDígite o primeiro numero: ");
    float num1;
    scanf("%f",&num1);

    printf("\nDígite o segundo numero: ");
    float num2;
    scanf("%f",&num2);

    if(num2 != 0){
        float quociente = num1/num2;
        printf("\nO quociente é: %.2f", quociente);
    }else{
        printf("\nO quociente é igual a 0");
    }



    return 0;
}