#include <stdio.h>
#include <math.h>

int main() {
    int n1;
    float r;

    printf ("\n\n  Digite o numero para o calculo de sua raiz quadrada\n\n");
    scanf ("%d", &n1);
    if (n1 >= 0) {
        r = pow(n1, 0.5);
        printf ("\n\n  A raiz quadrada deste numero vale %f\n\n\n\n\n\n\n\n\n\n\n\n", r);
        }
    else {
    printf ("\n\n  O numero digitado e invalido\n\n\n\n\n\n\n\n");
    }
}
