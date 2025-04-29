/*Considere uma matriz 10 × 10 preenchida com números inteiros aleatórios de 1 a 100.
Implemente uma função para cada item pedido abaixo:
• Qual a coluna que contém a maior soma ?
• Qual a linha que contém o valor da menor soma ?
• Quantos primos menores do que 100 existem na matriz ?
• Quantos múltiplos de um dado número existem na matriz ?
• Quantos números na matriz são menores do que os seus 4 vizinhos diretos ? Note que
os elementos das primeira e últimas linhas e primeira e última colunas não devem
ser pesquisados, pois eles deixam de ter um ou mais vizinhos.*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

const int linha = 10;
const int coluna = 10;

void ler(int m[linha][coluna]){
    
    srand(time(NULL));

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
           m[i][j] = 1 + rand()%100;
        }
    }

    printf("\nMatriz Original\n");
    for(int k = 0; k < linha; k++){
        for(int n = 0; n < coluna; n++){
            printf("%d ", m[k][n]);
        }
        printf("\n");
    }

}


void maiorSoma(int m[linha][coluna]){
    
    int colunamaior = 0;
    int soma;
    int maior = 1;
    
    for(int i = 0; i < coluna; i++){
       
        soma = 0;

        for(int j = 0; j < linha; j++){

            soma += m[j][i];
        }

        if(soma > maior){
            maior = soma;
            colunamaior = i;
           
        }

    }

   printf("\nA maior soma esta na coluna %d e eh: %d", colunamaior, maior);

}


void menorSoma(int m[linha][coluna]){
    
    int linhamenor;
    int soma;
    int menor = 100;
    
    for(int i = 0; i < linha; i++){

        soma = 0;
        
        for(int j = 0; j < coluna; j++){
            soma += m[i][j];
        }

        if(soma < menor){
            menor = soma;
            linhamenor = i;
        }

    }

   printf("\nA menor soma esta na linha %d e eh: %d", linhamenor, menor);

}


bool primosverifica(int num){
   

    if(num == 2){
        return true;
    }
    
    for(int i = 2; i < num; i++){

        if(num % i == 0 || num == 1){
            return false;
        }
       
    }

}


void primos(int m[linha][coluna]){
    

    int cont = 0;
    
    printf("\nPrimos: ");

    for(int i = 0; i < linha; i++){
        
        for(int j = 0; j < coluna; j++){
            
            if(primosverifica(m[i][j])){
                cont++;
                printf("%d ", m[i][j]);
            }
        }
        

    }

   printf("\nQuantidade de numeros primos: %d", cont);

}



void multiplos(int m[linha][coluna],int k){
   
    int multiplo = 0;

    printf("\nMultiplos de %d: ", k);

    for(int i = 0; i < linha; i++){
        
        for(int j = 0; j < coluna; j++){

            if(m[i][j] % k == 0){
                multiplo++;
                printf("%d ", m[i][j]);
            }

        }
        

    }

    printf("\nQuantidade de multiplos: %d", multiplo);

}


void vizinho(int m[linha][coluna]){
    
    int count = 0;

    printf("\nVerificando: ");
    
    for(int i = 1; i < linha - 1; i++) {

        for(int j = 1; j < coluna - 1; j++) {
            
            int atual = m[i][j];
            
            
            int cima = m[i-1][j];
            int baixo = m[i+1][j];
            int esquerda = m[i][j-1];
            int direita = m[i][j+1];
            
           
            if(atual < cima && atual < baixo && atual < esquerda && atual < direita) {
                printf("%d ", atual);
                count++;
            }
        }
    }
    
printf("\nVizinhos: %d ", count);

}



int main(){

    printf("\nDigite um numero para saber se ha multiplos na matriz: ");
    int k;
    scanf("%d", &k);

    int m[linha][coluna];
    
    ler(m);
    maiorSoma(m);
    menorSoma(m);
    primos(m);
    multiplos(m,k);
    vizinho(m);

}