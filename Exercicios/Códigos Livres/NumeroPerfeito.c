/*Uma função int ehPerfeito(int n) que retorna 1 se n é um número perfeito (soma dos divisores = n) e 0 caso contrário.*/
#include <stdio.h>
int ehPerfeito(int n){
    int resul = 0;

    int soma = 1;

    for(int i = 2; i < n; i++){
        if(n%i == 0){
            soma+=i;
        }

    }

    if(soma == n){
        resul = 1;
    }

    return resul;
}

int main(){
    printf("\nDigite um numero: ");
    int n;
    scanf("%d", &n);

    int resul = ehPerfeito(n);

    if(resul == 1){
        printf("\nO numero %d eh Perfeito", n);
    }else{
        printf("\nO numero %d nao eh Perfeito", n);
    }

    return 0;
}
