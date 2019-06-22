#include <stdio.h>

void counting (int A[], int tamanho, int n)
{
    int B[tamanho], C[n], i;

    for (i=0; i<n; i++)
    {
        C[i] = 0;
    }
    for (i=0; i<tamanho; i++)
    {
        C[A[i]]++;
    }
    for (i=1; i<n; i++)
    {
        C[i] = C[i] + C[i-1];
    }
    for (i=0; i<tamanho; i++)
    {
        B[C[A[i]]-1] = A[i];
        C[A[i]]--;
    }
    for (i=0; i<tamanho; i++)
    {
        A[i] = B[i];
    }
}

int main ()
{
    int A[10] = {1,2,3,2,4,2,3,0,1,0};
    int n=5,i;

    for(i=0;i<10;i++)
    {
        printf("%d; ", A[i]);
    }
    printf("\n\n");
    counting(A,10,5);
    for(i=0;i<10;i++)
    {
        printf("%d; ", A[i]);
    }

    return 0;
}
