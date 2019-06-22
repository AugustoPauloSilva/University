#include <stdio.h>
#include <math.h>

int main (){
    float k, N, raiz;
    int i;
    i = 0;
    k = 1;
    printf("\n\nDigite um numero para obter sua raiz\n\n");
    scanf("%f", &N);
    raiz = pow( N, 0.5 );
    while( !(k - raiz < 0.01 && k - raiz > -0.01) ){
        k = (k + N/k)/2;
        i = i+1;
        printf("%f; ", k);
    }
    printf("\n\n\nA raiz vale %f e a aproximacao vale %f depois de %d operacoes\n\n\n\n\n\n", raiz, k, i);
}
