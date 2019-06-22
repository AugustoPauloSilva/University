#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
int tam, i;
clock_t init, end;
int *vet;

   // aloca vetor com tamanhos comecando em 500 e incrementando de 200 em 200
   for (tam = 1000; NULL != (vet = malloc(tam * sizeof(int) )) ; tam *= 1.1 )
   {
      // preenche  vetor com numeros aleatorios
      printf("Tamanho do vetor: %d \n", tam );
      for (i = 0; i < tam; i++)
      {
         vet[i] = rand();
      }

      // conta o tempo decorrido em micro segundos
      init = clock();
      bubble_sort(vet, tam);
      end = clock();
      end = (end - init) / (CLOCKS_PER_SEC / 1000);

      // mostra o tempo decorrido
      printf("\tTempo decorrido (1/1000 s): %ld\n", end);
/*      for (i = 0; i < tam; i++)
      {
         printf("%d ", vet[i]);
      }
      printf("\n");
*/
    // libera o vetor
      free(vet);
   }

}

void bubble_sort(int ordenar[], int tamanho)
 {
 int aux=0, i, j;

     for( i = 0; i < tamanho; i++)
    {
        for( j = tamanho-1; j > i; j--){
            if( ordenar[j] < ordenar[j - 1])
            {
                aux = ordenar[j];
                ordenar[j] = ordenar[j-1];
                ordenar[j-1] = aux;
            }
        }
    }
 }
