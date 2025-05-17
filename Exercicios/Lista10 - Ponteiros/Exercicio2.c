/*Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado.
Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.*/

#include <stdio.h> 

int compara(int *a, int *b){

    if(a > b){
        printf("\nO endereco de 'a' eh maior.");
        return *a;
    }else{
        printf("\nO endereco de 'b' eh maior.");
        return *b;
    }

}



int main(){

    printf("\nDigite o valor de A: ");
    int a; 
    scanf("%d", &a);

    printf("\nDigite o valor de B: ");
    int b; 
    scanf("%d", &b);

    int resul = compara(&a, &b);

    printf("\nConteudo do maior endereco: %d", resul);

    return 0;


}