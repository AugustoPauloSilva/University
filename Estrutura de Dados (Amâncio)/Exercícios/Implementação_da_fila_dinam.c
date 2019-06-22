#include "Implementacao_da_fila.h"

int Cria(fila*F)
{
    F = (fila*) malloc (sizeof (fila));
    if (F != NULL)
    {
        F->inicio = NULL;
        F->fim = NULL;
        return 1;
    }
    return 0;
}

int Entra(fila *F, int *X, int *erro)
{
    no *p;
    *erro = 1;
    p = (no*) malloc (sizeof (no));
    if (F != NULL && X != NULL && p != NULL)
    {
        p->info = *X;
        if (F->inicio == NULL)
        {
            F->inicio = p;
        }
        else
        {
            F->fim->prox = p;
        }
        F->fim = p;
        *erro = 0;
    }
    return *erro;
}

int Sai (fila *F, int *X, int *erro)
{
    no *p;
    *erro = 1;
    if (F != NULL && X != NULL && F->inicio != NULL)
    {
        p = F->inicio;
        *X=p->info;
        if (F->inicio->prox != NULL)
        {
            F->inicio = F->inicio->prox;
        }
        else
        {
            F->inicio = NULL;
            F->fim = NULL;
        }
        free(p);
        *erro = 0;
    }
    return *erro;
}

/*
int EstaCheia (fila *F)
{
    if (F != NULL)
    {
        if (F->total == 100)
        {
            printf("\nA fila ta cheia vei\n");
        }
        else
        {
            printf("\nFalta coisa pra fila enche cara");
        }
        return 1;
    }
    return 0;
}

int EstaVazia (fila *F)
{
    if (F != NULL)
    {
        if (F->total == 0)
        {
            printf("\nA fila ta vazia vei\n");
        }
        else
        {
            printf("\nTem gente na fila cara");
        }
        return 1;
    }
    return 0;
}

int Apaga(fila*F)
{
    if (F != NULL)
    {
        F->inicio = 0;
        F->fim = 1;
        F->total = 0;
        return 1;
    }
    return 0;
}
*/
