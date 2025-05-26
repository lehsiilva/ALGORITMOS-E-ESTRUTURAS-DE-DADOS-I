#include <stdio.h>

int main(){

    int M;
    int N;

    do{
    
    printf("\nDigite o inicio do intervalo: ");
    scanf("%d", &M);

    printf("\nDigite o fim do intervalo: ");
    scanf("%d", &N);

    }while(M < 0 || N < 0);

    if (M > N) {
        int temp = M;
        M = N;
        N = temp;
    }

    int Sum = 0;

    for(int i = M; i <= N; i++){

        Sum += i;

        printf("%d ", i);
    }

    printf("Sum=%d", Sum);

    return 0;
    
}