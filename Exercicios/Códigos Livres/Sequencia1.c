/*Escreva o codigo da sequencia abaixo: 1/2, 3/3, 9/5, 27/9*/

#include <stdio.h>
#include <math.h>

int cima(int n){
    int resul;
    
    for(int i = 0; i < n; i++){
        resul = pow(3,i);
    }

    return resul;
    

}

int baixo(int n){
    int resul;
    
    for(int i = 0; i < n; i++){
       resul = (pow(2,i) + 1);
    }
    
    return resul;

}

void sequencia(int n){
    int cimaa = cima(n);
    int baixoo = baixo(n);
    double resul = cimaa/baixoo;

    printf("\nO resultado de %d / %d eh %.2lf", cimaa, baixoo, resul);
    
}

int main(){
    printf("\nDigite qual termo da sequencia voce quer descobrir: ");
    int n;
    scanf("%d", &n);

    cima(n);
    baixo(n);
    sequencia(n);

    return 0;
}