#include <stdio.h>
#include <stdlib.h>

typedef int elem;

typedef struct no_lista
{
    struct no_lista *prox;
    elem info;
} no_lista;

typedef struct lista
{
    no_lista *inicio, *fim;
} lista;

void Cria_Lista (lista *L)
{
    L->fim = NULL;
    L->inicio = NULL;
}

void Entra_Lista (lista *L, elem num)
{
    no_lista *novo;
    novo = (no_lista*) malloc (sizeof(no_lista));
    int i;

    novo->info = num;
    if (L->inicio == NULL)
    {
        L->inicio = novo;
    }
    else
    {
        L->fim->prox = novo;
    }
    L->fim = novo;
    novo->prox = NULL;
}

void Sai_Lista (lista *L, elem num)
{
    no_lista *aux = L->inicio, *anterior=NULL;
    while (aux != NULL)
    {
        if (aux->info == num)
        {
            if (L->inicio != L->fim)
            {
                if (anterior == NULL)
                {
                    L->inicio = L->inicio->prox;
                }
                else if (aux->prox == NULL)
                {
                    L->fim = anterior;
                }
                else
                {
                    anterior->prox = aux->prox;
                }
            }
            else
            {
                L->fim = NULL;
                L->inicio = NULL;
            }
            free(aux);
            aux = NULL;
        }
        else
        {
            anterior = aux;
            aux = aux->prox;
        }
    }
}
