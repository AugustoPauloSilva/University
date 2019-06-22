#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
      counting(vet, tam, 10000);
      end = clock();
      end = (end - init) / (CLOCKS_PER_SEC / 1000);

      // mostra o tempo decorrido
      printf("\tTempo decorrido (1/1000 s): %ld\n", end);
    // libera o vetor
      free(vet);
      tam += 500;
   }

}
