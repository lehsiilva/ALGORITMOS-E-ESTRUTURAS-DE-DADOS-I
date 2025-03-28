/*Construa uma função recursiva para a sequencia abaixo 1,2,3,4,5,...,n*/
#include <stdio.h>

int rec(int n){
    int resul;
    if(n != 5){
        printf("%d ", n);
        resul = rec(n+1);
    }else{
        
        printf("%d ",n);
        
    }
    printf("%d ",n);
  


    return resul;

}

int main(){

    int n=1;
    rec(n);
    
}