/*Crie uma struct chamada Livro com os campos:
titulo (até 50 caracteres)
autor (até 50 caracteres)
ano (inteiro)
Peça para o usuário digitar os dados de 3 livro e depois imprima todas as informações na tela.*/

#include <stdio.h>

typedef struct{

    char titulo[50];
    char autor[50];
    int ano;

}Livro;

void resenha(Livro *livro){

    for(int i = 0; i < 3; i++){

        printf("\nDigite o titulo do livro: ");
        fgets(livro[i].titulo, sizeof(livro[i].titulo), stdin);

        printf("\nDigite o autor do livro: ");
        fgets(livro[i].autor, sizeof(livro[i].autor), stdin);

        printf("\nDigite o ano do livro: ");
        scanf("%d", &livro[i].ano);

        getchar();
    }
}

void imprimir(Livro *livro){

     for(int j = 0; j < 3; j++){

        printf("\nLivro %d\n", j+1);

        printf("\nTitulo do livro: %s", livro[j].titulo);

        printf("\nAutor do livro: %s", livro[j].autor);

        printf("\nAno do livro: %d\n",livro[j].ano);
       
    }

}

int main(){

    Livro livro[3];

    resenha(livro);
    imprimir(livro);

    return 0;

}