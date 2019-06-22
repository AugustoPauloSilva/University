#include <stdio.h>

int main () {
    float numero, maior, menor;
    scanf("%f", &numero);
    while (numero != 0){
        if (numero > maior){
            maior = numero;
        }
        if (numero < menor){
            menor = numero;
        }
        scanf("%f", &numero);
    }
    printf("\n\n\nO maior = %f \nO menor = %f", maior, menor);
}
