#include <stdio.h>

int main (){
    int numero, divisor;
    scanf("%d", &numero);
    divisor = 1;
    for (divisor = 1; divisor <= numero; divisor++){
        if(numero % divisor == 0){
            printf("%d; ", divisor);
        }
    }
    printf("\n\n\n\n\n\n");
}
