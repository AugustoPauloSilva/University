#include <stdio.h>
#include <stdlib.h>

typedef int elem;

typedef struct no_pilha
{
    elem info;
    struct no_pilha* anterior;
}no_pilha;

typedef struct pilha_dinamica
{
    no_pilha* topo;
    int tamanho;
}pilha_dinamica;

void Cria_Pilha (pilha_dinamica *P)
{
    P->tamanho = 0;
    P->topo = NULL;
}

void Entra_Pilha (pilha_dinamica *P, elem num)
{
    no_pilha *novo;
    novo = (no_pilha*) malloc (sizeof(no_pilha));
    novo->info = num;

    if (P->topo == NULL)
    {
        novo->anterior = NULL;
    }
    else
    {
        novo->anterior = P->topo;
    }
    P->tamanho++;
    P->topo = novo;
}

int Sai_Pilha (pilha_dinamica *P, elem *num)
{
    no_pilha *aux;

    if (P->topo != NULL)
    {
        *num = P->topo->info;
        aux = P->topo;
        P->topo = P->topo->anterior;
        P->tamanho--;
        free(aux);
        return 1;
    }

    return 0;
}

typedef struct no_fila
{
    elem info;
    struct no_fila *prox;
}no_fila;

typedef struct fila
{
    no_fila *inicio, *fim;
}fila;


void Cria_Fila (fila *F)
{
    F->fim = NULL;
    F->inicio = NULL;
}

void Entra_Fila (fila *F, elem num)
{
    no_fila *novo;
    novo = (no_fila*) malloc (sizeof(no_fila));
    novo->info = num;

    if (F->inicio == NULL)
    {
        F->inicio = novo;
    }
    else
    {
        F->fim->prox = novo;
    }
    F->fim = novo;
    novo->prox = NULL;
}

int Sai_Fila (fila *F, elem *num)
{
    no_fila *aux;

    if (F->inicio != NULL)
    {
        aux = F->inicio;

        F->inicio = F->inicio->prox;
        *num = aux->info;
        free(aux);
        return 1;
    }

    return 0;
}

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
