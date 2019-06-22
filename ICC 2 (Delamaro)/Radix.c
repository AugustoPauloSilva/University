#include <stdio.h>

void counting (int A[], int tamanho, int n)
{
    int B[tamanho], C[10]={0}, i;

    for (i=0; i<tamanho; i++)
    {
        C[(A[i]/n)%10]++;
    }
    for (i=1; i<10; i++)
    {
        C[i] = C[i] + C[i-1];
    }
    for (i=tamanho-1; i>=0; i--)
    {
        B[--C[(A[i]/n)%10]] = A[i];
    }
    for (i=0; i<tamanho; i++)
    {
        A[i] = B[i];
    }
}

void radix (int A[], int tamanho)
{
    int maior=A[0],i,casa=1,B[tamanho], C[tamanho];

    for (i=0; i<tamanho; i++)
    {
        if (A[i] > maior)
        {
            maior = A[i];
        }
    }
    while (maior>=casa)
    {
        counting(A, tamanho, casa);
        casa = casa*10;
    }
}

int main ()
{
    int A[10] = {123,221,3217,2,46,267,397,302,1010,709};
    int n=5,i;

    for(i=0;i<10;i++)
    {
        printf("%d; ", A[i]);
    }
    printf("\n\n");
    radix(A,10);
    for(i=0;i<10;i++)
    {
        printf("%d; ", A[i]);
    }

    return 0;
}
