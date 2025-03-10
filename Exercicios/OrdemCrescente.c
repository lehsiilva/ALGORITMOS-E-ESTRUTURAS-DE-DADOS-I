/*Coloque 3 numeros em ordem crescente*/

#include <stdio.h>

int main(){
    
    printf("\nDigite 0 1 numero: ");
    int num1;
    scanf("%d", &num1);

    
    printf("\nDigite 0 2 numero: ");
    int num2;
    scanf("%d", &num2);

    
    printf("\nDigite 0 3 numero: ");
    int num3;
    scanf("%d", &num3);

    int maior;
    int menor;
    int meio;

    if(num1 > num2 && num2 > num3){
        maior = num1;
        meio = num2;
        menor = num3;

    } else if(num2 > num1 && num1 > num3){
        maior = num2;
        meio = num1;
        menor = num3;

    }else if(num3 > num2 && num2 > num1){
        maior = num3;
        meio = num2;
        menor = num1;

    }else if(num3 > num1 && num1 > num2){
        maior = num3;
        meio = num1;
        menor = num2;

    }else if(num1 > num3 && num3 > num2){
        maior = num1;
        meio = num3;
        menor = num2;

    }else {
        maior = num2;
        meio = num3;
        menor = num1;
    }

    printf("\nOrdem crescente: %d %d %d", menor, meio, maior);
    


   
}