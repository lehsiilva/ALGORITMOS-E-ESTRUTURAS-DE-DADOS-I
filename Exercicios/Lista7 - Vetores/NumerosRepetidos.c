/*Crie um vetor para armazenar 5 números inteiros. Solicite que o usuário insira os valores
e, em seguida, verifique e escreva se há números repetidos no vetor. Caso existam, mostre
quais são e quantas vezes aparecem*/

#include <stdio.h>

void ler(int v[], int tam){
    for(int i = 0; i < tam; i++){
        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%d", &v[i]);
    }

}

void repetidos(int v[], int tam){
    int cont;
    
    for(int i = 0; i < tam ; i++){
        cont = 0;
        for(int j = 0; j < tam ; j++){
            if(v[i] == v[j]){
                cont++; 
            }

        }

        printf("\nO numero %d repete %d vezes", v[i],cont);
        
    }

   

}

int main(){
    int tam = 5;
    int v[tam];

    ler(v,tam);
    repetidos(v,tam);
}