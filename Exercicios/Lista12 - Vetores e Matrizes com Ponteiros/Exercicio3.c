/*Desenvolva uma função que receba como parâmetro os ponteiros de dois vetores de 5
posições. O procedimento deverá imprimir na tela os valores contidos nos dois vetores de
forma crescente (Utilize ponteiros)*/

#include <stdio.h>
#include <stdlib.h>

void ler (int *v, int *k){

    for(int i= 0 ; i < 5 ; i++){

        printf("\n Digite o valor do 1 vetor na posiçao %d: ", i);
        scanf("%d",(v+i));
    }
     

    for (int j = 0 ; j < 5 ; j++){

        printf("\n Digite o valor do vetor 2 na posiçao %d: ", j);
        scanf("%d",(k+j));
    } 
}


void ordenar ( int *v, int *k){

    int junto [10];
    int i; 
    int troca;

    for (i = 0 ; i < 5 ; i++ ){
        junto[i]= v[i];
    }


        for(int j = 0 ; j < 5 ; j++){
            junto[i]= k[j];
            i++;
        }


            for (int a = 0 ; a < 10 ; a++ ){

                for(int b = 0 ; b < 10-1-a ; b++ ){
                    if(junto[b] > junto[b+1]){
                        troca = junto[b];
                        junto[b] = junto[b+1];
                        junto[b+1] = troca;
                    }
                } 
            }

    printf("\n vetor ordenado: ");

    for (int c = 0; c  < 10 ; c++){
        printf("%d ", junto[c]);
    }

}
  
  int main(){
    int v[5];
    int k[5];
    ler ( v,k);
    ordenar (v,k);

    return 0;


  }