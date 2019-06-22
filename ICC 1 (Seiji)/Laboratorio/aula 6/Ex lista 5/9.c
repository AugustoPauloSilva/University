#include <stdio.h>

int main(){
    int **matriz, m, n, i, j;

    scanf("%d %d", &m, &n);
    matriz = (int**) calloc(m, sizeof(int*));
    for(i = 0; i < m; i++){
        matriz[i] = (int*) calloc(n, sizeof(int));
        if(matriz[i] == NULL){
            printf("Erro");
            return NULL;
        }
    }
    for (i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            *(matriz + n*i + j) = (i+1) * (j+1);
        }
    }
    for (i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%-4d", *(matriz + n*i + j));
        }
        printf("\n");
    }
    printf("\n\n\n\n\n");
    return 0;
}
