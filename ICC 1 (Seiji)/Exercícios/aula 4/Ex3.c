#include <stdio.h>

int main (){
    int n, i, soma, par;
    i = 1;
    soma = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        par = 2 * i;
        soma = soma + par;
    }
    printf("\n\na soma vale %d\n\n\n\n\n\n\n", soma);
}
