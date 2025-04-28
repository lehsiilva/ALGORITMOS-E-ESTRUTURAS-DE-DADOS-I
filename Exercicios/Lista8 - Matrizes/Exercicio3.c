/*Implemente uma função que identifique o maior valor presente na linha i de uma matriz
de reais, sendo i também um argumento da função.
• Argumentos: o endereço da matriz de reais e um valor inteiro relativo à linha chave
da pesquisa
• Valor gerado: um valor real correspondente ao maior valor encontrado na linha*/


#include <stdio.h>


void ler(int linha, int coluna, double m[linha][coluna]){
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("\nDigite o termo [%d][%d]: ", i,j);
            scanf("%lf", &m[i][j]);
        }
    }

    printf("\nMatriz Original\n");
    for(int k = 0; k < linha; k++){
        for(int n = 0; n < coluna; n++){
            printf("%.2lf ", m[k][n]);
        }
        printf("\n");
    }

}

void maior(int linha, int coluna,double m[linha][coluna], int i){
    
    double maior = m[i][0];
    
    for(int k = i; k <= i; k++){
        
        for(int j = 1; j < coluna; j++){
            
            if(m[k][j] > maior){
                maior = m[k][j];
            }
        
        }
    }

        printf("\nMaior da %d linha: %.2lf", i, maior);



}


int main(){
    

    printf("\nDigite o numeros de coluna: ");
    int coluna;
    scanf("%d", &coluna);

    printf("\nDigite o numeros de linhas: ");
    int linha;
    scanf("%d", &linha);

    printf("\nDigite a linha em que vc deseja saber qual o maior:  ");
    int i;
    scanf("%d", &i);

    double m[linha][coluna];


    ler(linha, coluna, m);
    maior(linha, coluna, m, i);
    
}