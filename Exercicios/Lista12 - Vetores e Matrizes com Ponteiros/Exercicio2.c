/*Uma agência de publicidade pediu à agência de modelos Luz & Beleza para encontrar
um ator que tenha idade entre 18 e 20 anos para participar de uma campanha publi-
citária. Foram inscritas 20 candidatos e, ao se inscreverem, forneceram nome e idade.
Tais informações foram armazenadas em 2 vetores distintos. O funcionário responsável
pelas inscrições se distraiu e inscreveu um candidato fora dos limites de idade. Faça um
programa para retirar do vetor de nomes o candidato que não está nas especificações da
agência. Imprima o vetor que contém os nomes dos candidatos aptas a concorrer a uma
vaga para a campanha.*/

#include <stdio.h>
#include <string.h>

void ler(int *idade, char *nome){

    for(int i =0; i < 5; i++){
        printf("\nDigite o nome do candidato: ");
        scanf("%[^\n]", (nome + i * 200));
        getchar();

        printf("\nDigite a Idade do Candidato: ");
        scanf("%d", (idade + i));
        getchar();
    }
}



void verifica(int *idade, char *nome){

    char verificaNome[5*200];
    int verificaIdade[5];

    int cont = 0;

    for(int i = 0; i < 5; i++){

        if(*(idade + i) >= 18 && *(idade + i) <= 20){
            
            strcpy(verificaNome + cont * 200, nome + i * 200); //foco nessas funções de string
            *(verificaIdade + cont) = *(idade + i);
            cont ++;
            
         }
    }

    printf("\nCandidatos validos: \n");
    for(int j = 0; j < cont; j++){

        printf("%s - ", (verificaNome + j * 200)); // %s ou %c?
        printf("%d\n", *(verificaIdade + j));

    }
}

int main(){

    int idade[5];
    char nome[5 * 200];

    ler(idade, nome);
    verifica(idade,nome);

    return 0;
}