#include <stdio.h>


void inverter(int numeros[], int tamanho)
{
    int aux;
    if (tamanho < 2)
    {
        return;
    }
    else
    {
        aux = numeros [0];
        numeros[0] = numeros[tamanho-1];
        numeros[tamanho-1] = aux;
        inverter(numeros+1, tamanho-2);
    }
}

int main ()
{
    int i, numeros[10] = {1,2,3,4,5,6,7,8,9,10};

    inverter(numeros,10);
    for (i=0; i<10; i++)
    {
        printf("%d ", numeros[i]);
    }

    return 0;
}
