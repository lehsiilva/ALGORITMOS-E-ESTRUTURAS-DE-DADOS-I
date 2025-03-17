/*Fazer uma função double somaUmSobreImpar(int n) que recebe um número inteiro n
e retorna o valor do somatório dos n primeiros termos da sequência anterior. A sua
função somaUmSobreImpar deve utilizar a função umSobreImpar desenvolvida na questão
anterior.*/

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

double somaUmSobreImpar(int n){
    double soma = UmSobreImpar(n);

    double somarAnterior = 0.0;

    for(int i = (double)soma; i > 0  ; i-=2){

        somarAnterior += (1.0/i);

    }

    return somarAnterior;
}


int main(){
    printf("\nDigite qual termo voce deseja saber: ");
    int n;
    scanf("%d", &n);

    double resul = UmSobreImpar(n);

    printf("\nResultado: %.2f", resul);

    double resulSoma = somaUmSobreImpar(n);

    printf("\nSomatorio: %.2f", resulSoma);


}