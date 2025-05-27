#include <string.h> 
#include <stdio.h>  

void verifica(char *str) { 

    int tam = strlen(str); 
    char verificador[tam]; 
    int a = 0;             
    int cont = tam - 1;    

    for (int i = cont; i >= 0; i--) { 
        verificador[a] = str[i];      
                                      
        a++;                      
    }
    
    int palindromo = 0; 

    for (int j = 0; j < tam; j++) { 
        if (verificador[j] == str[j]) { 
            palindromo++;               
        }
    }

    verificador[tam] = '\0';
    
    if (palindromo == tam) {
        printf("\n Eh Palindromo");
    } else {
        printf("\n Nao eh Palindromo");
    }
   
}

int main() {

    printf("\nDigite uma palavra: ");
    char str[100]; 
    scanf("%[^\n]", str); 

    verifica(str); 

    return 0;
}