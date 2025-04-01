/* Os alunos de uma turma com numAlunoS fizeram numProva provas. Leia cada uma das
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

    float mediaAluno = 0;

    float mediaTurma;

    float mediaAlta = 0;

    float mediaAlunoResp;

    float percentual;


    for (int i = 1; i <= numAlunos; i++){
        
        mediaAluno = 0;

        for(int j = 1; j <= numProvas; j++){
            
            printf("\nDigite a nota do %d aluno na %d prova: ", i,j);
            int nota;
            scanf("%d", &nota);
            mediaAluno+=nota;
            mediaAlunoResp = mediaAluno/numProvas;
    
        
        }

        mediaTurma += mediaAlunoResp;
         
        if(mediaAlunoResp >= 80){
            mediaAlta ++;
        }

        percentual = (mediaAlta/numAlunos)*100;


        printf("A media do %d aluno é: %.2f\n", i, mediaAlunoResp);

    
    }

    mediaTurma /= numAlunos;

    printf("\nMedia da turma: %.2f", mediaTurma);
    printf("\nO percentual acima de 80%% é: %.2f%%", percentual);


}