/*Uma função que mostre os n primeiros numeros impares em ordem decrescente*/

#include <stdio.h>

void Impar(int n){

    int cont = 1;

    for(int i = 1; cont <= n; i +=2){
         printf(" %d", i);

        cont++;
    }


}

void decresceImpar(int n){


    for(int i = n*2-1; i > 0; i -=2){
        printf(" %d", i);
    }
}


int main(){
    printf("\nDigite qual termo voce deseja saber: ");
    int n;
    scanf("%d", &n);

    Impar(n);

    decresceImpar(n);

}