/*Verifique se um determinado número existe em um vetor e retorne sua posição (índice).*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ler(int tam, int v[]){
    srand(time(NULL));

    printf("\nVetor gerado: ");
    for(int i = 0 ;i < tam; i++){
        v[i] = rand()%10;
        printf("%d ", v[i]);
    }
   

}

void descobrir(int tam, int v[], int num){

    int encontrados = 0;

    for(int i = 0; i < tam; i++){
        
        if(v[i] == num){
            printf("\nO numero %d aparece na posicao %d do vetor", num, i);
            encontrados++;
        }
    }

    if(encontrados == 0){
        printf("\nNumero nao encontrado!");
    }
    
}

int main(){
    printf("\nDigite a quantidade de elementos do seu vetor: ");
    int tam;
    scanf("%d", &tam);

    printf("\nDigite o numero que vc quer saber se tem no vetor: ");
    int num;
    scanf("%d", &num);



    int v[tam];

    ler(tam, v);
    descobrir(tam, v, num);
}