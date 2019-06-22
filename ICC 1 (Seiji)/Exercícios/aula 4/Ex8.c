#include <stdio.h>

int main (){
    int linhas, i, j;
    scanf("%d", &linhas);
    i = 1;
    j = 1;
    while (i <= linhas){
        for(j = 1; j <= linhas - i; j++){
            printf(" ");
        }
        for(j = linhas - i + 1; j <= linhas; j++){
            printf("*");
        }
        printf("\n");
        i = i + 1;
        j = 1;
    }
}
