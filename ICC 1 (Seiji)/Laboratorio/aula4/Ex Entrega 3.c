#include <stdio.h>

int main(){
    int A[9][9], B[9][9], M[9][9];
    int i, j, k;


    for (i=0; i<=8; i++){
        for (j=0; j<=8; j++){
            M[i][j] = 0;
            if (i != j){
                B[i][j] = 2;
            }
            else {
                B[i][j] = 1;
            }
            A[i][j] = i + 2*j;
        }
    }
    printf("Matriz A\n");
    for (i=0; i<=8; i++){
        for (j=0; j<=8; j++){
            printf("%-3d", A[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz B\n");
    for (i=0; i<=8; i++){
        for (j=0; j<=8; j++){
            printf("%-3d", B[i][j]);
        }
        printf("\n");
    }
        printf("\n\n\nMatriz At\n");
    for (i=0; i<=8; i++){
        for (j=0; j<=8; j++){
            printf("%-3d", A[j][i]);
        }
        printf("\n");
    }
    printf("\nMatriz multiplicacao\n");
    for (i=0; i<=8; i++){
        for (k=0; k<=8; k++){
            for (j=0; j<=8; j++){
                M[i][k] = M[i][k] + A[i][j]*B[j][k];
            }
            printf("%-6d", M[i][k]);
        }
        printf("\n");
    }
}
