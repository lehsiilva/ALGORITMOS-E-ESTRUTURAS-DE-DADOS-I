/*Junte dois vetores de string com e sem a função strcat*/

#include <stdio.h>
#include <string.h>

void ler(char *v, char *k){

         printf("\nDigite a palavra do 1 vetor: ");
         scanf("%[^\n]", v);
         getchar();
   

    

        printf("\nDigite a palavra do 2 vetor: ");
         scanf("%[^\n]", k);
         getchar();
    

}

int tamanho1(char *v){

    int i = 0;

    while(*(v+i) != '\0'){
        i++;
    }

    return i;
}

int tamanho2(char *k){

    int i = 0;

    while(*(k+i) != '\0'){
        i++;
    }

    return i;
}

void junta(char *v, char *k){

    strcat(v,k);
    printf("\nConcatenada pela funcao: %s", v);

    int tam1 = tamanho1(v);
    int tam2 = tamanho2(k);

    int tam_atual = tam1 + tam2;

    char juntar[tam_atual];

    int i = 0;

    for(i = 0; i < tam1; i++){

        *(juntar + i) = *(v + i);
    }

    for(int a = 0; a < tam2; a ++){

        *(juntar + i ) = *(k + a);
        
        i++;
    }

    printf("\nConcatenado sem funcao: \n");
    printf("%s", juntar);
    

}

int main(){

    printf("\nDigite o tamanho dos vetores: ");
    int tam;
    scanf("%d", &tam);
    getchar();

    char v[tam];
    char k[tam];
   

    ler(v,k);
    tamanho1(v);
    tamanho2(k);
    junta(v,k);

    
}