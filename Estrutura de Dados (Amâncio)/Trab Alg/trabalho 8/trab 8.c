#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    struct no *prox, *ant;
    int info;
} no;

typedef struct lista
{
    no *inicio, *fim;
    int total;
} lista;

void inserir_inicio (lista *L, int x, int *erro)
{
    no *p;

    *erro = 1;
    p = (no*) malloc (sizeof (no));

    if (p != NULL)
    {
        *erro = 0;
        p->info = x;
        p->ant = NULL;
        if (L->inicio == NULL)
        {
            L->fim = p;
            p->prox = NULL;
        }
        if (L->fim != NULL)
        {
            p->prox = L->inicio;
            L->inicio->ant = p;
        }
        L->inicio = p;
        L->total++;
    }

}

void inserir_fim (lista *L, int x, int *erro)
{
    no *p;

    *erro = 1;
    p = (no*) malloc (sizeof (no));

    if (p != NULL)
    {
        *erro = 0;
        p->info = x;
        p->prox = NULL;
        if (L->inicio == NULL)
        {
            L->inicio = p;
            p->ant = NULL;
        }
        else
        {
            L->fim->prox = p;
            p->ant = L->fim;
        }
        L->fim = p;
        L->total++;
    }

}

void eliminar (lista *L, int *x, int *erro)
{
    no *p;
    int teste=0;

    p=L->inicio;
    while ((p!=NULL) && (teste != 0))
    {
        if (p->info != *x)
        {
            p=p->prox;
        }
        else
        {
            if (p==L->inicio)
            {
                if (L->inicio->prox == NULL)
                {
                    L->fim = NULL;
                    L->inicio == NULL;
                }
                else
                {
                    L->inicio->prox->ant = NULL;
                    L->inicio=L->inicio->prox;
                }
            }
            else if (p==L->fim)
            {
                L->fim = L->fim->ant;
                L->fim->prox = NULL;
            }
            else
            {
                p->ant->prox = p->prox;
                p->prox->ant = p->ant;
            }
            L->total--;
            free(p);
            teste = 1;
        }
    }
}
