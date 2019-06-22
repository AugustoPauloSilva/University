#include <stdio.h>
#include <stdlib.h>

int Merge (int vetor[],int inicio,int meio,int fim)
{
    int *aux, i=inicio, j=fim, k=0;

    aux = malloc ((fim-inicio) * sizeof (int));
    while (i<meio && j<fim)
    {
        if (vetor[i] <= vetor[j])
        {
            aux[k] = vetor[i];
            i++;
        }
        else
        {
            aux[k] = vetor[j];
            j++;
        }
        k++;
    }
    while (i<meio)
    {
        aux[k] = vetor[i];
        i++;
        k++;
    }
    while (j<fim)
    {
        aux[k] = vetor[j];
        j++;
        k++;
    }
    for (k=inicio; k<fim; k++)
    {
        vetor[k] = aux[k-inicio];
    }
    free(aux);
    return 1;
}


int MergeSort (int vetor[], int inicio, int fim)
{
    int meio;

    if (fim - inicio <= 1)
    {
        return 0;
    }
    else
    {
        meio = (inicio+fim)/2;
        MergeSort (vetor, inicio, meio);
        MergeSort (vetor, meio, fim);
        Merge (vetor, inicio, meio, fim);
        return 1;
    }
}

int main ()
{
    int vetor[100], i;

    for (i=0; i<100; i++)
    {
        vetor[i] = 100-i;
    }

    printf("Antes\n");
    for (i=0; i<100; i++)
    {
        printf(" %d;", vetor[i]);
    }

    printf("\n");

    MergeSort(vetor, 0, 100);

    printf("Depois\n");
    for (i=0; i<100; i++)
    {
        printf(" %d;", vetor[i]);
    }

    return 0;
}
