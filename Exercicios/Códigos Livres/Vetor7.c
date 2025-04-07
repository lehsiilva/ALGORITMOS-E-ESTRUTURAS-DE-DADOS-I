/*Leia um vetor de 10 posiçoes. Conte quantos elementos primos tem nele*/

#include <stdio.h>

int main(){
    int v[10];
    int primo = 1;
    int resul= 0;

    for(int i = 0; i < 10; i ++){
        printf("\nDigite um numero: ");
        scanf("%d", &v[i]);

        primo = 1;


        if(v[i] < 2){
            primo = 0;
        }
        if(v[i] == 2){
            primo = 1;
        }

            for(int j = 2; j < v[i]; j ++){
                    if(v[i]%j == 0){
                        primo = 0;
                    }
    
            }

        if(primo != 0){
            resul++;
        }
               
        
    }

       
        printf("\nPrimos: %d", resul);


}

   
