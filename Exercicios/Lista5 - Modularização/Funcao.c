/*Fazer uma função que recebe um número inteiro n, um número real x e retorna o somatório
dos n primeiros termos da sequência mostrada na questão anterior*/


#include <stdio.h>
#include <math.h>

int Ehpar(int n){
    int resul;

    resul = 2*n;

    return resul;
}

int EhImpar(int n){
    int resul;
    int cont = 0;

    for(int i = 3; cont < n; i +=2){
        resul = i;
        cont++;
    }
    
    return resul;
}

int fatorial(int n){
    int fat = EhImpar(n);
    int mult = 1;

    for(int i = fat; i >= 1 ; i--){
        mult *=i;
    }

    return mult;
}

double multiplica(int n, int x){
    int par = Ehpar(n);
    int fat = fatorial(n);

    double mult = 0.0;

    for(int i = 1; i <= n; i ++){
        mult = ((float)par/fat) * pow(x,i);
    }

    return mult;
}

double somatorio(int n, int x){
    double soma = 0.0;
    for(int i = 1; i <= n; i ++){
        soma += multiplica(i,x);
    }
    return soma;
}

int main(){

    printf("Digite qual numero da sequencia voce deseja saber: ");
    int n;
    scanf("%d", &n);
    printf("Digite o valor de X: ");
    int x;
    scanf("%d", &x);

    int resulpar = Ehpar(n);
    printf("\nResultado par = %d", resulpar);

    int resulImpar = EhImpar(n);
    printf("\nResultado impar = %d", resulImpar);

    int resulfatorial = fatorial(n);
    printf("\nResultado fatorial = %d", resulfatorial);

    double resulfuncao = multiplica(n,x);
    printf("\nResultado Função = %.2lf", resulfuncao);

    double resulsomatorio = somatorio(n,x);
    printf("\nResultado Somatorio = %.2lf", resulsomatorio);

    return 0;

}