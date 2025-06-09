#include <stdio.h>
#include <string.h>

typedef struct{

    int codigo;
    char nome[50];
    int qntd;
    int qnt_minima;

}Estoque;

void ler(Estoque *estoque, int n){

    for(int i = 0; i < n; i++){

        printf("\nDigite o codigo do %d produto: ", i + 1);
        scanf("%d", &estoque[i].codigo);
        getchar();

        printf("\nDigite o nome do %d produto: ", i + 1);
        fgets(estoque[i].nome, sizeof(estoque[i].nome), stdin);
        estoque[i].nome[strcspn(estoque[i].nome, "\n")] = '\0';

        printf("\nDigite a quantidade do estoque do produto %d: ", i + 1);
        scanf("%d", &estoque[i].qntd);

        printf("\nDigite a quantidade minima recomendada do produto %d: ", i + 1);
        scanf("%d", &estoque[i].qnt_minima);
        
    }
}

void meta(Estoque *estoque, int n){

    int falta_min;

    for(int i = 0; i < n; i++){

        falta_min = (estoque[i].qnt_minima - estoque[i].qntd);

        float porcentagem = (falta_min*100)/ estoque[i].qnt_minima ;

        if(estoque[i].qntd < estoque[i].qnt_minima){
            printf("\nCodigo: %d", estoque[i].codigo);
            printf("\nNome: %s",estoque[i].nome);
            printf("\nEstoque atual: %d", estoque[i].qntd);
            printf("\nMínimo recomendado: %d", estoque[i].qnt_minima);
            printf("\nReposição necessária: %d unidades ( %.1f%% )", falta_min,porcentagem);
        }
    }
}

int main(){

    int n;

    do{

        printf("\nDigite a quantidade de produtos: ");
        scanf("%d", &n);

        if(!(n >= 1 && n <= 100)){
            printf("\nValor invalido, Digite novamente: ");
        }

    }while(!(n >= 1 && n <= 100));

    Estoque estoque[n];

    ler(estoque,n);
    meta(estoque,n);

    return 0;
}