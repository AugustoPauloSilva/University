#include <stdio.h>

int main(){
    int numeros[10][9], i, j, m;

    j = 0;
    i = 0;
    for(i = 0; i<= 9; i = i + 1){
        for(j = 0; j <= 8; j = j + 1){
            numeros[i][j] = (i+1) * (j+2);
        }
    }
    i = 0;
    j = 0;
    printf("  Tabuada 2       Tabuada 3       Tabuada 4       Tabuada 5\n");
    for(i = 0; i <= 9; i = i + 1){
        for(j = 0; j <= 3; j = j + 1){
            printf("  %d x %-2d= %-6d", j+2, i+1, numeros[i][j]);
        }
        printf("\n");
    }
}
