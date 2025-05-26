#include <stdio.h>
int main()
{
    int X[10] = {-1, -45234, -22, -120, 0, 2, -200, 1, 9, 22};
    for(int i = 0; i < 10; i++){
        if(X[i] <= 0) X[i] = 1;
        printf("X[%d] = %d\n" , i, X[i]);
    }
    return 0;
}


