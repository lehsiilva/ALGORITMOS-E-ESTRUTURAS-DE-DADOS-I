/*inverte string*/
#include <stdio.h>
#include <string.h>



int main(){
    
    printf("\nDigite: ");
    char str[10];
    fgets(str, sizeof str, stdin);
    int i = 0;
    printf("%s", str);

        for(int j = 8; j > 2; j--){ //tem que ser a soma no for 
            
            printf("\nTrocando %c por %c\n", str[i], str[j]);
            int troca = str[i];
            str[i] = str[j];
            str[j] = troca;
            
            i++;
            
            
        }

        printf("%s\n", str);

    return 0;
}