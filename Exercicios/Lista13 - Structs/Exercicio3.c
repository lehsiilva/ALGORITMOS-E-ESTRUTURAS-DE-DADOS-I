/*Crie uma struct chamada ponto2d que tenha como atributos os pontos x, y e z. Crie duas
estruturas do tipo ponto2d chamadas ponto_inicial e ponto_final. Faça um menu com
as seguintes opções e implemente-as:
1 Digitar o valor do primeiro ponto
2 Digitar os valores do segundo ponto
3 Mostrar a distância entre os pontos
4 Sair*/

#include <stdio.h>
#include <math.h>

typedef struct{

    float x;
    float y;
    float z;

}Ponto2d;

float distancia_ponto(Ponto2d p1, Ponto2d p2){

    float distancia = sqrt(pow(p1.x - p2.x,2) + pow(p1.y - p2.y,2) + pow(p1.z - p2.z,2));

    return distancia;
}

int main(){

    Ponto2d ponto_inicial = {0, 0, 0};
    Ponto2d ponto_final = {0, 0, 0};

    int opcao;

    do{

        printf("\nMENU:\n");
        printf("1 - Digitar o valor do primeiro ponto\n");
        printf("2 - Digitar os valores do segundo ponto\n");
        printf("3 - Mostrar a distancia entre os pontos\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao){

        case 1:
        
            printf("\nDigite x ponto inicial: ");
            scanf("%f", &ponto_inicial.x);

            printf("\nDigite y ponto inicial: ");
            scanf("%f", &ponto_inicial.y);

            printf("\nDigite z ponto inicial: ");
            scanf("%f", &ponto_inicial.z);

            break;
        
        case 2:

            printf("\nDigite x do ponto final: ");
            scanf("%f", &ponto_final.x);

            printf("\nDigite y do ponto final: ");
            scanf("%f", &ponto_final.y);

            printf("\nDigite z do ponto final: ");
            scanf("%f", &ponto_final.z);

            break;

        case 3: {

            float distancia = distancia_ponto(ponto_inicial, ponto_final);

            printf("\nDistancia: %.2f", distancia);

            break;
        }

        case 4:

            printf("\nFim do programa!");

            break;

        default:

            printf("\nInvalido!");
        }

    }while(opcao != 4);

    return 0;

}