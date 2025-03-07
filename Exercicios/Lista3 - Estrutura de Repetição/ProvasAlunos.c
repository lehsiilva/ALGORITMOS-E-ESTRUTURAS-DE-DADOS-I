/*Os alunos de uma turma com numAlunoS fizeram numProva provas. Leia cada uma das
numProva provas feitas por cada um dos numAlunoS alunos. Imprima na tela: a média
de cada aluno, a média da turma e o percentual dos alunos que tiveram média maior ou
igual a 80%.*/

#include <stdio.h>

int main(){
    printf("\nDigite o numero de alunos:");
    int numAlunos;
    scanf("%d",&numAlunos);

    printf("\nDigite o numero de provas:");
    int numProvas;
    scanf("%d",&numProvas);

    float mediaAluno;

    float mediaTurma;

    float mediaAlta;

    float SomaNota;


    int i = 1;

    while(i <= numAlunos){
        
        printf("\nDigite a nota do %d aluno: \n", i);
        int nota;
        scanf("%d",&nota);

        SomaNota += nota;

        printf("\nA media do aluno %d é: %.2f\n", i, mediaAluno );


        mediaAluno = SomaNota/numProvas;
        

        mediaTurma = SomaNota/numAlunos;


        if(mediaAluno >= 80){
            mediaAlta++;
        }

        printf("\nA media da turma é: %.2f", mediaTurma );
        printf("\nO percentual acima de 80%% é: %.2f", mediaAlta );

        

        i++;
    }

    



}