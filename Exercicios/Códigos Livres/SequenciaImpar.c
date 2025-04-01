/*Uma função void imprimeImpares(int inicio, int fim) que imprime todos os ímpares no intervalo [inicio, fim].*/

#include <stdio.h> 

void imprimeImpares(int inicio, int fim){
    
    for (int i = inicio; i <= fim; i++){
        
        if(i%2 == 1){
            printf("%d ", i);
       
        }
    }
}

int main(){
    
    printf("\nDigite o numer inicial: ");
    float inicio;
    scanf("%f", &inicio);

    printf("\nDigite o numero final: ");
    float fim;
    scanf("%f", &fim);

    imprimeImpares(inicio,fim);

}