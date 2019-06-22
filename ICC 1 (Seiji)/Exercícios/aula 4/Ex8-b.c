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
        j = 1;
        for(j = 1; j <= i; j++){
            printf("*");
            if (j != 1){
                printf ("*");
            }
        }
        printf("\n");
        i = i + 1;
        j = 1;
    }
}
