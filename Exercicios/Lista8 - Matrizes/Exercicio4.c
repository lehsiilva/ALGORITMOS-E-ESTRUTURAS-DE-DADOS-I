/*Considere uma matriz quadrada de reais, construa uma função que calcule a diferença
entre o maior valor presente acima de sua diagonal principal e o maior valor presente
abaixo da diagonal principal.
• Argumento: o endereço da matriz quadrada de reais
• Valor gerado: um valor real relativo à diferença entre os maiores valores acima e
abaixo da diagonal*/

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

double acimaSup(int linha, int coluna,double m[linha][coluna]){
    
    double maiorAcima = m[0][1];
    
    for(int i = 1; i < linha; i++){
        
        for(int j = 1 + i; j < coluna; j++){
            
            if(m[i][j] > maiorAcima){
                maiorAcima = m[i][j];
            }
        
        }
    }


    return maiorAcima;

}

double abaixoInf(int linha, int coluna,double m[linha][coluna]){
    
    double maiorAbaixo = m[1][0];
    
    for(int i = 2; i < linha; i++){
        
        for(int j = 0; j < i; j++){
            
            if(m[i][j] > maiorAbaixo){
                maiorAbaixo = m[i][j];
            }
        
        }
    }

       

    return maiorAbaixo;



}

void diferenca(int linha, int coluna,double m[linha][coluna]){
    
    double acima = acimaSup(linha, coluna, m);
    double abaixo = abaixoInf(linha, coluna, m);

    printf("%2.lf ", acima);
    printf("%2.lf ", abaixo);

    double diferenca = (acima - abaixo);

    printf("\nDiferenca: %.2lf", diferenca);

}


int main(){
    
    int linha;
    int coluna;

    do{
        printf("\nDigite o numeros de coluna: ");
        
        scanf("%d", &coluna);

        printf("\nDigite o numeros de linhas: ");
        
        scanf("%d", &linha);

            if(linha != coluna){
                printf("\nInvalido a matriz deve ser QUADRADA\n");
            }

    }while(linha != coluna );


    double m[linha][coluna];


    ler(linha, coluna, m);
    acimaSup(linha, coluna, m);
    abaixoInf(linha, coluna, m);
    diferenca(linha, coluna, m);
    
}