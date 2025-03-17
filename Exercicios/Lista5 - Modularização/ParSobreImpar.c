/*Uma função double parSobreImpar(int n) que recebe um número inteiro n e retorna
o n-ésimo termo da sequência 2/3 , 4/5 , 6/7 , 8/9 , 10/11 , . . .. A sua função deve utilizar as funções
par e umSobreImpar desenvolvidas anteriormente*/

#include <stdio.h>

int EhPar(int n){
    
    int resul = 2 * n;

    return resul;
}

double UmSobreImpar(int n){

    
    double seq = 0.0;

    int cont = 0;

    for(int i = 3; cont < n; i +=2){
        
        seq = 1.0/i;

        cont++;
    }

    return seq; 
}

double parSobreImpar(int n){
    
    int par = EhPar(n);
    double impar = UmSobreImpar(n);

    float seq = 0.0;

        for(int i = 0; i < n; i ++){

        seq = impar*par;

        }

    return seq;
}



int main(){

   printf("\nDigite um valor: ");
   int n;
   scanf("%d", &n);

   int resul = EhPar(n);

   printf("\nO termo %d da sequencia é: %d", n, resul);
  

   double resul2 = UmSobreImpar(n);

   printf("\nImpar: %.2f", resul2);

   double resul3 = parSobreImpar(n);

   printf("\nResultado: %.2f", resul3);
}