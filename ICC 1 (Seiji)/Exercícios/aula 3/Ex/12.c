#include <stdio.h>

int main () {
    float t, s;
    printf("\n\n  Digite o salario por horas trabalhadas e o total trabalhado no mes em horas\n\n");
    scanf("%f%f", &s, &t);
    if (t <= 40){
        s = t * s;
        printf("\n\n  O salario desse mes tem valor: %f reais\n\n\n\n\n", s);
        }
    else {
        s = t * s + (t - 40) * 0.5 * s;
        printf("\n\n  O salario desse mes tem valor: %f reais\n\n\n\n\n", s);
    }
}
