#include <stdio.h>

int main() {
    float numeros[16];
    int i, j;

    j = 0;
    i = 0;
    for(i = 0; i <= 7; i = i + 1){
        j = 8 + i;
        scanf("%f", &numeros[j]);
    }
    for(i = 8; i <= 15; i = i + 1){
        j = i - 8;
        scanf("%f", &numeros[j]);
    }
    i = 0;
    printf("\n");
    for(i = 0; i <= 15; i = i + 1){
        printf("%.1f;   ", numeros[i]);
    }
    printf("\n\n\n\n\n\n\n\n\n\n");
}
