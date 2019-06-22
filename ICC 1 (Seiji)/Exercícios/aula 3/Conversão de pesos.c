#include <stdio.h>

int main() {
    float Plibras;
    float Pquilos;

    printf("\n\n  Digite o peso em libras\n\n");
    scanf("%f", &Plibras);
    if (Plibras > 0){
        Pquilos = Plibras/2.2;
        printf("\n\n  O peso em quilos vale:  %f\n\n\n\n\n\n\n\n", Pquilos);
        }
    else
    printf("\n\n  O valor foi dado incorretamente\n\n\n\n\n\n\n\n");
}
