#include <stdio.h>

int le_variaveis(int *n1, int *n2);
int troca_valores(int *n1, int *n2);

int main (){
    int n1, n2;


    le_variaveis(&n1, &n2);
    troca_valores(&n1, &n2);

    printf("\n\n\n\n\n\n\n\n\n");
    return 0;
}


int le_variaveis(int *n1, int *n2){
    scanf("%d %d", n1, n2);
    printf("\nn1 = %d\nn2 = %d", *n1, *n2);
    return 0;
}

int troca_valores(int *n1, int *n2){
    int x;
    x = *n1;
    *n1 = *n2;
    *n2 = x;
    printf("\n\nn1 = %d\nn2 = %d", *n1, *n2);
}
