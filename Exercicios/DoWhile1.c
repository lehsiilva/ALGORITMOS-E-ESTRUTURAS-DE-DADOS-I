/*Leia dois números reais e realize a divisão entre eles.*/

#include <stdio.h>

int main(){
    float num1;
    float num2;
    
    do{
        
        printf("\nDígite o primeiro número: ");
        scanf("%f",&num1);
        
        printf("\nDígite o segundo número: ");
        scanf("%f",&num2);

        if (num2 == 0) {
            printf("Erro! O divisor não pode ser zero. Tente novamente.\n");
        }

    }while (num2 == 0);

    float divisao = num1/num2;
    printf("\nResultado: %.2f", divisao);






    return 0;
}