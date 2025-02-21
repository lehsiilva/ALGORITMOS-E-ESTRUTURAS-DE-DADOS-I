/*Ler um número real. Determinar e escrever se ele é maior, menor ou igual a zero*/

#include <stdio.h>

int main(){
    printf("\nDígite um numero: ");
    float num;
    scanf("%f",&num);

    if(num > 0){
        printf("\nNúmero maior que 0");
    }else if(num < 0){
        printf("\nNúmero menor que 0");
    }else {
        printf("\nNúmero igual a 0");
    }


    return 0;
}