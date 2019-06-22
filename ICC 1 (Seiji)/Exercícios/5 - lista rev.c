#include <stdio.h>

int calc_quadrados(int n){
    if (n == 1){
        return 1;
    }
    else if (n > 1){
        return calc_quadrados(n - 1) + 2*n - 1;
    }
    else{
        return 0;
    }
}

int main() {
    int n, quadrado;

    scanf("%d", &n);
    quadrado = calc_quadrados(n);

    if (quadrado != 0){
        printf("\nQuadrado de %d = %d\n\n\n\n\n\n", n, quadrado);
    }
    else{
        printf("\nErro nao foi possivel calcular quadrado\n\n\n\n\n\n");
    }
}
