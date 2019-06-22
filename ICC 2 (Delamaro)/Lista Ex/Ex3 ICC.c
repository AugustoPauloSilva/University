#include <stdio.h>

int potencia (int numero, int expoente)
{
    if (expoente == 0)
    {
        return 1;
    }
    else if (expoente == 1)
    {
        return numero;
    }
    else
    {
        return numero * potencia(numero, expoente-1);
    }
}

int main ()
{
    int x=3, n=3;

    x = potencia(x, n);

    printf("%d", x);

    return 0;
}
