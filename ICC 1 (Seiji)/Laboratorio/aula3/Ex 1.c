#include <stdio.h>
#include <math.h>

int main (){
    int numero, saida, x, y;
    float r;
    x = 2;
    r = 0;
    saida = 0;
    while (saida != -1){
        printf("\nDigite o numero\n");
        scanf("%d", &numero);
        saida = numero;
        if(numero < 0){
            numero = - numero;
        }
        for(x = 2; x < numero; x++){
            r = numero % x;
            if (r == 0){
                x = numero;
                y = 1;
            }
            else{
                y = 2;
            }
        }
    if (numero == 0 || numero == 1){
        y = 1;
    }
    if (numero == 2){
        y = 2;
    }
    if (y == 1){
        printf("\nO numero %d nao e primo\n\n\n", saida);
    }
    if (y == 2){
        printf("\nO numero %d e primo\n\n\n", saida);
    }
    }
}
