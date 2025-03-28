/*Fazer uma função que recebe um número inteiro n, um número real x e retorna o n-ésimo
termo da sequência abaixo. Utilize as funções desenvolvidas anteriormente
2x/3! , 4x^2/5! , 6x^3/7! , 8x^4/9! , 10x^5/11! , . .*/

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


int main(){

    printf("Digite qual numero da seqquencia voce deseja saber: ");
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

    return 0;

}