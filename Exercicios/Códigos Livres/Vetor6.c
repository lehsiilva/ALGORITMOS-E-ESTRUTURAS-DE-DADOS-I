/*Faça um programa que:
-Defina um vetor com 6 posiçoes
-Atribua os seguintes valores: 1,0,5,-2,-5,7
-Armazene numa variavel a soma dos elementos das posiçoes 0,1,5
-Modifique o elemento da posiçao 4/100
-Mostre na tela os elementos do vetor*/

#include <stdio.h>

int main(){
    int v[]={1,0,5,-2,-5,7};
    int soma = v[0]+v[1]+v[5];
    v[4] = 100;

    for(int i = 0; i < 6; i ++){
        printf("%d ", v[i]);
    }

    printf("\nSoma: %d", soma);

    
}