/*Fazer um método recursivo que recebe um número inteiro n e retorna o n-ésimo termo
da equação de recorrência abaixo*/

#include <stdio.h>
#include <math.h>

double equacao(int num){

    int resul;

    if(num == 1){

        resul = 2;

    }else{

        if(num == 2){

            resul = 3;

        }else{

            resul = (5 * num) + pow(equacao(num-1),num);
        }
    }

    return resul;
}


int main(){
   
    printf("\nDigite um numero: ");
    int num;
    scanf("%d", &num);

    double resul = equacao(num);
    printf("\nO %d termo da equação é: %.2lf", num, resul);

    return 0;
}