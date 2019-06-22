#include "Implementacao_da_fila.h"

int Cria(fila*F)
{
    if (F != NULL)
    {
        F->inicio = 0;
        F->fim = 0;
        F->total = 0;
        return 1;
    }
    return 0;
}

int Entra(fila *F, int *X, int *erro)
{
    *erro = 0;
    if (F != NULL && X != NULL)
    {
        F->itens[F->fim] = X;
        F->fim++;
        F->total++;
        *erro = 1;
    }
    return *erro;
}

int Sai (fila *F, int *X, int *erro)
{
    *erro = 0;
    if (F != NULL && X != NULL)
    {
        X = F->itens[F->inicio];
        F->inicio++;
        F->total--;
        *erro = 1;
    }
    return *erro;
}

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

