/*Peça ao usuário para digitar um número e verifique se ele está presente em um vetor pré-definido (ex.: [2, 4, 6, 8, 10]). Se estiver, mostre sua posição; se não, exiba "Não encontrado".
Exemplo 1 (entrada): 6
Saída esperada: Encontrado na posição 2
Exemplo 2 (entrada): 5
Saída esperada: Não encontrado*/

#include <stdio.h>

int main(){

    int origem[5] = {2,4,6,8,10};
  
    printf("\nDigite um numero: ");
    int num;
    scanf("%d", &num);

    int encontrado = 0;


    
    for(int i = 0; i < 5; i++){

        if(num == origem[i]){
            printf("\n Encontrado na posicao %d", i);
            encontrado = 1;
        }

    }

    if(encontrado == 0){
        printf("\nNao encontrado");
    }

}