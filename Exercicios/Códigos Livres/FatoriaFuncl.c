/*Função para calcular o fatorial de n*/

#include <stdio.h>

int fatorial(int n){

    int fat = 1;

    for(int i = n; i >= 1 ; i--){
        
        fat*=i;
    }

    return fat;

}


int main(){
    printf("\nDigite qual termo voce deseja saber: ");
    int n;
    scanf("%d", &n);

    int resul = fatorial(n);

    printf("\nResultado: %d", resul);

}