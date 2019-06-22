#include <stdio.h>

int main(){
    int n, x;
    printf("\n\nDigite um numero positivo\n\n");
    scanf("%d", &n);
    if (n >= 0){
        while (n >= 0){
            printf("%d; ", n);
            n = n - 1;
        }
    }
}

