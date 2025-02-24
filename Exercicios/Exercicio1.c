/*Leia dois números.
* Se um deles for maior que 45, realize a soma dos mesmos.
* Caso contrário, se os dois forem maior que 20, realize a subtração do maior pelo menor,
* Senão, se um deles for menor do que 10 e o outro diferente de 0 realize a divisão do primeiro pelo segundo.
* Finalmente, se nenhum dos casos solicitados for válido, mostre seu nome na tela.*/

int main(){
    printf("\nDigite 2 valores: ");

    printf("\nDigite o primeiro valor: ");
    int num1;
    scanf("%d", &num1);

    printf("\nDigite o segundo valor: ");
    int num2;
    scanf("%d", &num2);

    int maior;
    int menor;

     //Maior
     if(num1 > num2){
        maior = num1;
    }else{
        maior = num2;
    }

    //Menor
    if(num1 < num2){
        menor = num1;
    }else{
        menor = num2;
    }

    
    if(num1 > 45 || num2 > 45){ //Maior que 45
        printf("%d\n",num1+num2);
     

    }else if (num1 > 20 && num2 > 20){ //Se os dois forem maior que 20
        printf("%d\n", maior - menor);

    }else if ((num1 < 10 && num2 != 0) || (num2 < 10 && num1 !=0)){ //Se um deles for menor do que 10 e o outro diferente de 0
        printf("%.2f\n", (float)num1/num2);

    }else{
        printf("\nLetícia"); //Nenhum dos casos 
    }

return 0;
}