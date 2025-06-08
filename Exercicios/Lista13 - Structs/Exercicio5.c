/*Na questão anterior crie uma função que peça o nome de uma banda ao usuário e diga se
ela está entre suas bandas favoritas ou não*/

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

        printf("\nQue posição do ranking essa banda está dentre as suas 5 bandas favoritas(Se nao for favorita digite 0): ");
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

    printf("\n");

}

void favoritos(Bandas *bandas){

    printf("\nDigite o nome de uma banda: ");
    char favoritos[100];
    fgets(favoritos, sizeof favoritos, stdin);

    int achou = 0;

    
    for(int i = 0; i < 5; i++){

        if(strcmp(favoritos, bandas[i].nome) == 0 && bandas[i].num_ranking != 0){

            printf("\nA banda %s esta nos seus favoritos!",bandas[i].nome);

            achou = 1;

            break;

        }
        
    }

    if(achou == 0){

        printf("\nA banda nao esta nos seus favoritos!");

    }
}


int main(){

    Bandas bandas[5];

    preencher(bandas);
    exibir(bandas);
    favoritos(bandas);

    return 0;
}