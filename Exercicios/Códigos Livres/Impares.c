/*Uma função que mostre os n primeiros numeros impares em ordem crescente*/

#include <stdio.h>

void Impar(int n){

    int cont = 0;

    for(int i = 1; cont <= n; i +=2){
        printf("%d ", i);

        cont++;
    }

}


int main(){
    printf("\nDigite qual termo voce deseja saber: ");
    int n;
    scanf("%d", &n);

    Impar(n);

}