/*Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
• (a) Permita ao usuário entrar com os dados de 5 alunos.
• (b) Encontre o aluno com maior nota da primeira prova.
• (c) Encontre o aluno com maior média geral.(soma as 3 notas obtidas e divide por 3)
• (d) Encontre o aluno com menor média geral. (soma as 3 notas obtidas e divide por 3)
• (e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6
para aprovação.*/

#include <stdio.h>
#include <string.h>

typedef struct{

    char nome[100];
    int matricula;
    float p1;
    float p2; 
    float p3;

}Alunos;

void ler(Alunos *alunos){

    for (int i = 0; i < 5; i++){

        printf("\nDigite o nome do %d aluno: ", i+1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("\nDigite a matricula do %d aluno: ", i+1);
        scanf("%d", &alunos[i].matricula);

        printf("\nDigite a nota do aluno %d na primeira prova: ", i+1);
        scanf("%f", &alunos[i].p1);

        printf("\nDigite a nota do aluno %d na segunda prova: ", i+1);
        scanf("%f", &alunos[i].p2);

        printf("\nDigite a nota do aluno %d na terceira prova: ", i+1);
        scanf("%f", &alunos[i].p3);

        getchar();
    }

}

void maior_nota(Alunos *alunos){

    float maior = alunos[0].p1;
    char nomeA[100];
    strcpy(nomeA, alunos[0].nome);


    for(int i = 1; i < 5; i++){

        if(alunos[i].p1 > maior){

            maior = alunos[i].p1;
            strcpy(nomeA, alunos[i].nome);
        }
    }

    printf("\nO aluno com maior nota na prova 1 eh %s, com a nota de %.2f: ", nomeA, maior);

    printf("\n");

}

void maior_media(Alunos *alunos){

    float soma = 0;

    float media = 0;

    float media_maior = (alunos[0].p1 + alunos[0].p2 + alunos[0].p3)/3;

    char nomeA[100];
    strcpy(nomeA, alunos[0].nome);

    for(int i = 1; i < 5; i++){

        soma = alunos[i].p1 + alunos[i].p2 + alunos[i].p3;

        media = soma/3;

        if(media > media_maior){

            media_maior = media;

            strcpy(nomeA, alunos[i].nome);
        }

    }

    printf("\nO aluno com a maior media foi %s, com a media de %.2f ", nomeA, media_maior);

    printf("\n");
}


void menor_media(Alunos *alunos){

    float soma = 0;

    float media = 0;

    float media_menor = (alunos[0].p1 + alunos[0].p2 + alunos[0].p3)/3;

    char nomeA[100];
    strcpy(nomeA, alunos[0].nome);

    for(int i = 1; i < 5; i++){

        soma = alunos[i].p1 + alunos[i].p2 + alunos[i].p3;

        media = soma/3;

        if(media < media_menor){

            media_menor = media;

            strcpy(nomeA, alunos[i].nome);
        }

    }

    printf("\nO aluno com a menor media foi %s, com a media de %.2f ", nomeA, media_menor);

    printf("\n");
}


void aprovados(Alunos *alunos){

    float media;

    for(int i = 0; i < 5 ; i++){

        media = (alunos[i].p1 + alunos[i].p2 + alunos[i].p3)/3;

        if(media >= 6){
            printf("\nAluno %s APROVADO",alunos[i].nome);
        }else{
            printf("\nAluno %s REPROVADO",alunos[i].nome);
        }

    }
    
}

int main(){
    
    Alunos alunos[5];

    ler(alunos);
    maior_nota(alunos);
    maior_media(alunos);
    menor_media(alunos);
    aprovados(alunos);
}