/*Fazer uma função double umSobreImpar(int n) que recebe um número inteiro n e retorna
o n-ésimo termo da sequência 1/3, 1/5, 1/7, 1/9, 1/11, 1/13.....*/


#include <stdio.h>

double UmSobreImpar(int n){

    
    double seq = 0.0;

    int cont = 0;

    for(int i = 3; cont < n; i +=2){
        
        seq = 1.0/i;

        cont++;
    }

    return seq; 

}


int main(){
    printf("\nDigite qual termo voce deseja saber: ");
    int n;
    scanf("%d", &n);

    double resul = UmSobreImpar(n);

    printf("\nResultado: %.2f", resul);

}