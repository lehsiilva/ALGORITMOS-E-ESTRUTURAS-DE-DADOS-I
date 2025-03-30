/*Fazer um método recursivo que recebe um número inteiro e retorna o seu fatorial.*/

#include <stdio.h>

int fatorial(int num){
    
    int resul;

    if(num == 1){

        resul = 1;

    }else{

        resul = num * fatorial(num-1);
    }

    return resul;

}

int main(){
   
    printf("\nDigite um numero: ");
    int num;
    scanf("%d", &num);

    int resul = fatorial(num);
    printf("\nO fatorial de %d é: %d", num, resul);

    return 0;
}
