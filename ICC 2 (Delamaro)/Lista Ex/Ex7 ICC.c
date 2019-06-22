#include <stdio.h>


int soma_real (float num[], int tam)
{
    if (tam == 1)
    {
        return num[0];
    }
    else
    {
        return num[tam-1] + soma_real(num, tam-1);
    }
}

int main ()
{
    float vetor[10] = {1.5, 3.0, 6.7, 4.3, 10.0, 5.5, 12.0, 78.2, 92.8, 1.0};
    float soma;

    soma = soma_real(vetor, 10);
    printf("%f", soma);
    return 0;
}
