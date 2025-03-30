/*Fazer um método recursivo que recebe um número inteiro e positivo n e calcula o somatório
abaixo*/

#include <stdio.h>

int somatorio(int num){

    int resul;

    if(num == 0){

        resul = 0;

    }else{

        resul = num + somatorio(num - 1);
    }

    return resul;
}


int main(){
   
    printf("\nDigite um numero: ");
    int num;
    scanf("%d", &num);

    int resul = somatorio(num);
    printf("\nO somatorio de %d é: %d", num, resul);

    return 0;
}