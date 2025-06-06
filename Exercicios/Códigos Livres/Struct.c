/*Crie uma struct chamada Produto com:
nome (string)
preço (float)
quantidade (int)

Peça ao usuário para informar os dados de 3 produtos. Depois, exiba:

O valor total de cada produto (preço × quantidade).

O nome do produto mais caro.*/

#include <stdio.h>
#include <string.h>

typedef struct{

    char nome[100];
    float preco;
    int qnt;

}Produto;

void ler(Produto *produto){

    for(int i = 0; i < 3; i++){

        printf("\nDigite o nome do produto %d: ", i+1);
        fgets(produto[i].nome, sizeof(produto[i].nome), stdin);
        produto[i].nome[strcspn(produto[i].nome, "\n")] = '\0';

        printf("\nDigite a preco do produto %d: ", i+1);
        scanf("%f", &produto[i].preco);

        printf("\nDigite a quantidade do produto %d: ", i+1);
        scanf("%d", &produto[i].qnt);

        getchar();

    }

}

void valor_total(Produto *produto){

    float total;

    for(int i = 0; i < 3; i++){

        total = produto[i].preco * produto[i].qnt;

        printf("\nQuantidade total de %s: %.2f ", produto[i].nome, total);

    }

    printf("\n");

}

void produto_caro(Produto *produto){

    float caro = produto[0].preco;

    char nomeP[100];

    strcpy(nomeP, produto[0].nome);

    for(int i = 1; i < 3; i++){

        if(produto[i].preco > caro){

            caro = produto[i].preco;

            strcpy(nomeP, produto[i].nome);
        }
    }

    printf("\nProduto mais caro: %s", nomeP);
    
}

int main(){

    Produto produto[3];
    ler(produto);
    valor_total(produto);
    produto_caro(produto);


    return 0;
}