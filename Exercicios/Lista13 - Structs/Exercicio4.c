/*Defina uma estrutura que irá representar bandas de música. Essa estrutura deve ter o
nome da banda, que tipo de música ela toca, o número de integrantes e em que posição
do ranking essa banda está dentre as suas 5 bandas favoritas. Crie um looping para
preencher as 5 estruturas de bandas criadas no exemplo passado. Após criar e preencher,
exiba todas as informações das bandas/estruturas.*/

#include <stdio.h>
#include <string.h>

typedef struct{

    char nome[100];
    char tipo[100];
    int integrantes;
    int num_ranking;

}Bandas;

void preencher(Bandas *bandas){

    for(int i = 0; i < 5; i++){

        printf("\nDigite o nome da banda %d: ", i+1);
        fgets(bandas[i].nome, sizeof bandas[i].nome, stdin);

        printf("\nDigite o tipo de musica que a banda toca %d: ", i+1);
        fgets(bandas[i].tipo, sizeof bandas[i].tipo, stdin);

        printf("\nDigite a quantidade de integrantes da banda %d: ", i+1);
        scanf("%d", &bandas[i].integrantes);

        printf("\nQue posição do ranking essa banda está dentre as suas 5 bandas favoritas: ");
        scanf("%d", &bandas[i].num_ranking);

        getchar();
    }

}

void exibir(Bandas *bandas){

    for(int i = 0; i < 5; i++){

        printf("\nNome da banda: %s", bandas[i].nome);

        printf("\nTipo de musica que a banda toca: %s ", bandas[i].tipo);

        printf("\nQuantidade de integrantes da banda: %d ", bandas[i].integrantes);

        printf("\nPosição do ranking essa banda esta dentre as suas 5 bandas favoritas: %d", bandas[i].num_ranking);

    }

}


int main(){

    Bandas bandas[5];

    preencher(bandas);
    exibir(bandas);

    return 0;
}