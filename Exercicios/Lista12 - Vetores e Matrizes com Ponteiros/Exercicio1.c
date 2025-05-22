/*Considere um vetor de 10 números inteiros positivos maiores que zero e um único número
X inteiro, também positivo e maior que zero. Faça um programa para:
(a) ler pelo teclado o vetor;
(b) ler pelo teclado o número X;
(c) encontrar e imprimir o par de posições consecutivas cujas componentes possuem a
maior distância entre elas;
(d) verificar se o vetor está em ordem crescente, decrescente ou não ordenado;
(e) dizer quantos números no vetor são maiores que X, menores que X e iguais a X*/

void ler(int *v){
    
    do{

        for(int i = 0; i < 10; i++){
            printf("\nDigite o valor do vetor na posicao %d: ", i);
            scanf("%d", (v+i));
        }

        if(v < 0){
            printf("\nOs numeros devem ser positivos!");
        }

    }while(v < 0);
}

void par_de_posicoes(int *v){

    int diferenca = *v - *v + 1;

    for(int i = 1; i < 10; i++){

        int sub = (*(v+i) - *(v + i) + 1);

        if(sub > diferenca){

            diferenca = sub;

            printf("%d %d", *(v+i), *(v + i)+1 );
        }
    }


}

void ordenadado(int *v){

    for(int i = 0; i < 10; i++){

        if(*(v+i)>*(v + i) + 1)
        
    }

}

void verificar(){

}

/*for(int i = 0; i < 10; i++){
        
    }*/


int main(){

    int v[10];

    printf("\nDigite o valor de X: ");
    int x;
    scanf("%d", &x);

    par_de_posicoes(v);
}