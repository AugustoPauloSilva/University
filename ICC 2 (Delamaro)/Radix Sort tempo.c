#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

void main()
{
int tam=5000, i, inicio;
clock_t init, end;
int *vet;

   // aloca vetor com tamanhos comecando em 500 e incrementando de 200 em 200
   while (NULL != (vet = malloc(tam * sizeof(int) )) && tam < 15000)
   {
      // preenche  vetor com numeros aleatorios
      printf("Tamanho do vetor: %d \n", tam );
      for (i = 0; i < tam; i++)
      {
         vet[i] = rand()%10000;
      }
        inicio = 0;

      // conta o tempo decorrido em micro segundos
      init = clock();
      radix(vet, tam);
      end = clock();
      end = (end - init) / (CLOCKS_PER_SEC / 1000);

      // mostra o tempo decorrido
      printf("\tTempo decorrido (1/1000 s): %ld\n", end);
    // libera o vetor
      free(vet);
      tam += 500;
   }

}
