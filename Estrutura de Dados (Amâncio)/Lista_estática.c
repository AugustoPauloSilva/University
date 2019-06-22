#include <stdio.h>
#include <stdlib.h>
#define TAM 10

typedef int elem;

typedef struct no_lista_estatica
{
    int prox;
    elem info;
} no_lista_estatica;

typedef struct lista_estatica
{
    int ini, primeiro_vazio;
    no_lista_estatica banco[TAM];
} lista_estatica;

void remover_estatico_ordenado (lista_estatica *L, elem chave)
{
    no_lista_estatica *aux=&(L->banco[L->ini])
    int ant=-1;

    while (aux->prox != -1)
    {
        if (L->banco[L->banco[aux->prox].prox].info == chave)
        {
            ant = L->banco[aux->prox].prox;
            aux->prox = L->banco[ant].prox;

        }
        aux = &(L->banco[aux->prox]);
    }
}
