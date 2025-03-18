/*Fazer a função que recebe um número inteiro n, um número real x e retorna o n-ésimo
termo da sequência abaixo. Utilize a função desenvolvida na letra a da questão anterior.
2x/3 , 4x^2/5 , 6x^3/7 , 8x^4/9 , 10x^5/11 , . .*/

#include <stdio.h>
#include <math.h>

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

double sequencia(int n, double x){

    double seq = parSobreImpar(n);
    double resul;

    int cont = 0;

    for(int i = 0; cont < n; i ++){

        resul = seq * pow(x, i+1);

        cont++;
    }

    return resul;
}



int main(){

   printf("\nDigite qual termo da sequencia voce quer saber: ");
   int n;
   scanf("%d", &n);

   printf("\nDigite o valor de x: ");
   double x;
   scanf("%lf", &x);

   int resul = EhPar(n);

   printf("\nO termo %d da sequencia é: %d", n, resul);
  

   double resul2 = UmSobreImpar(n);

   printf("\nImpar: %.2lf", resul2);

   double resul3 = parSobreImpar(n);

   printf("\nResultado: %.2lf", resul3);

   double resulSeq = sequencia(n, x);
   printf("\nResultado Sequencia: %.2lf", resulSeq);
}

