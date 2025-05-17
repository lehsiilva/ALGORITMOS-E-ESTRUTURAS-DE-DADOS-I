/*Faça um programa que modifique as vogais de uma frase. O programa deve ler uma frase
(máx. 100 caracteres) e armazená-la num vetor. Imprima a frase lida trocando as vogais,
isto é, trocar ’a’ pelo ’u’, ’e’ pelo ’o’, ’i’ pelo ’u’, ’o’ pelo ’a’ e o ’u’ pelo ’e’. Usar uma
função void (procedimento) para realizar a troca e uma função para realizar a impressão
da frase trocada. A função deve ter como parâmetro um ponteiro char referente ao vetor.*/
#include <stdio.h>

const int max = 100;

int contar(char *v){

    int i = 0;

    while(v[i] != '\0'){
        i++;
    }

    return i;
}

void troca(char *v){

    int tam = contar(v);

    printf("\nModificado: ");

    for(int i = 0; i < tam; i++ ){

        if(v[i] == 'a'){
            v[i] = 'u';
            

        }else if (v[i] == 'e'){
            v[i] = 'o';
            
            
        }else if(v[i] == 'i'){
            v[i] = 'u';
            

        }else if(v[i] == 'o'){
            v[i] = 'a';

        }else if (v[i] == 'u'){
            v[i] = 'e';
        }
        
        printf("%c", v[i]);
        
    }
}


int main(){
    printf("\nDigite uma frase: ");
    char v[max];
    scanf("%[^\n]",v);

    troca(v);
}