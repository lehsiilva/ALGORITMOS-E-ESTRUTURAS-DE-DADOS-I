#include <stdio.h>

struct Vetor{

    float x;
    float y;
    float z;

};

void ler(struct Vetor *vetor){

    for(int i = 0; i < 2; i++){

        printf("\nDigite o valor de X no %d vetor: ", i+1);
        scanf("%f", &vetor[i].x);

        printf("\nDigite o valor de Y no %d vetor: ", i+1);
        scanf("%f", &vetor[i].y);

        printf("\nDigite o valor de Z no %d vetor: ", i+1);
        scanf("%f", &vetor[i].z);
    }

}
void soma_vetores(struct Vetor *vetor, int n){

    float somax = 0;
    float somay = 0;
    float somaz = 0;

    for(int i = 0; i < n*2; i++){

        somax += vetor[i].x;
    }

    for(int j = 0; j < n*2; j++){

        somay += vetor[j].y;
    }

    for(int k = 0; k < n*2; k++){

        somaz += vetor[k].z;
    }

    printf("%.2f, %.2f, %.2f",somax,somay,somaz);

}

int main(){

    struct Vetor vetor[2];

    printf("\nDigite o valor de N: ");
    int n;
    scanf("%d", &n);

    ler(vetor);
    soma_vetores(vetor,n);
}