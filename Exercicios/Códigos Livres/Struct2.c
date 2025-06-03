/*Crie uma struct chamada Endereco com os campos:
rua (string)
numero (int)
cidade (string)
Depois, crie uma struct chamada Pessoa que inclua:
nome (string)
idade (int)
endereco (do tipo Endereco)
Leia os dados de uma pessoa (incluindo endereço completo) e imprima tudo.*/

#include <stdio.h>

typedef struct{

    char rua[50];
    int num;
    char cidade[50];

}Endereco;

typedef struct{

    char nome[50];
    int idade;

    Endereco endereco;

}Pessoa;

void ler( Pessoa *pessoa){


    printf("\nDigite o nome da rua: ");
    fgets(pessoa -> endereco.rua, sizeof(pessoa -> endereco.rua), stdin);

    printf("\nDigite o numero da casa: ");
    scanf("%d", &pessoa -> endereco.num);

     
    getchar();

    printf("\nDigite a cidade: ");
    fgets(pessoa -> endereco.cidade, sizeof(pessoa -> endereco.cidade), stdin);

    printf("\nDigite o seu nome: ");
    fgets(pessoa->nome, sizeof(pessoa->nome), stdin);

    printf("\nDigite sua idade: ");
    scanf("%d", &pessoa->idade);
   

}

void imprimir(Pessoa *pessoa){

    printf("\nNome da rua: %s", pessoa -> endereco.rua);
    printf("\nNumero da casa: %d", pessoa -> endereco.num);
    printf("\nCidade: %s",pessoa -> endereco.cidade);
    printf("\nNome: %s", pessoa->nome);
    printf("\nIdade: %d", pessoa->idade);
}

int main(){

    Pessoa pessoa;

    ler(&pessoa);
    imprimir(&pessoa);
}
