/*Faça um vetor com 50 posiçoes preenchidos com o seguinte valor: (i+5*i)%(i+1)*/

#include <stdio.h>

int main(){
    int v[50];
    

    for(int i = 0; i < 50; i++){
        printf("\nDigite um numero: ");
        scanf("%d", &v[i]);        
        v[i] = (i+5*i)%(i+1);
        printf("%d ", v[i]);
    }


}