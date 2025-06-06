/*Crie uma struct chamada Aluno com os seguintes campos:
nome (string)
matrícula (int)
nota (float)
Peça ao usuário para cadastrar 5 alunos e, ao final, imprima o nome dos alunos com nota maior ou igual a 7.0.*/

#include <stdio.h>
#include <string.h>

typedef struct{

    char nome[100];
    int matricula;
    float nota;

}Aluno;

void ler(Aluno *aluno){

    for(int i = 0; i < 5; i++){

        printf("\nDigite o nome do aluno %d: ", i+1);
        fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
        aluno[i].nome[strcspn(aluno[i].nome, "\n")] = '\0';

        printf("\nDigite a matricula do aluno %d: ", i+1);
        scanf("%d", &aluno[i].matricula);

        printf("\nDigite a nota do aluno %d: ", i+1);
        scanf("%f", &aluno[i].nota);

        getchar();

    }

}

void aprovados(Aluno *aluno){

    printf("\nAprovados: \n");

     for(int i = 0; i < 5; i++){

        if(aluno[i].nota >= 7.0){

            printf("\n%s", aluno[i].nome);
        }

    }
}

int main(){

    Aluno aluno[5];

    ler(aluno);
    aprovados(aluno);

    return 0;

}