#include "Trab_6.h"

int CriaFila (fila* F)
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

int EstaVazia (fila *F)
{
    if (F->total == 0)
    {
        return 1;
    }
    return 0;
}

int EstaCheia (fila *F)
{
    if (F->total == TamFila)
    {
        return 1;
    }
    return 0;
}

int Entra (fila *F, elemFila *X, int *erro)
{
    *erro = 0;
    if (EstaCheia(F) == 0)
    {
        *erro = 1;
        F->itens[F->fim] = *X;
        F->total++;
        if (F->fim == TamFila - 1)
        {
            F->fim = 0;
        }
        else
        {
            F->fim++;
        }
    }
    return *erro;
}

int Sai (fila *F, elemFila *X, int *erro)
{
    *erro = 0;
    if (EstaVazia(F) == 0)
    {
        *erro = 1;
        *X = F->itens[F->inicio];
        F->total--;
        if (F->inicio == TamFila - 1)
        {
            F->inicio = 0;
        }
        else
        {
            F->inicio++;
        }
    }
    return *erro;
}


int CriaPilha (pilha_de_fila* P)
{
    if (P != NULL && CriaFila((&P->vetor[0])) != 0)
    {
        P->topo = 0;
        return 1;
    }
    return 0;
}

int EstaVaziaPilha (pilha_de_fila* P)
{
    if (P->topo == 0)
    {
        return 1;
    }
    return 0;
}

int EstaCheiaPilha (pilha_de_fila* P)
{
    if (P->topo == TamPilha-1)
    {
        return 1;
    }
    return 0;
}

void Push (pilha_de_fila* P, fila* F, int* erro)
{
    *erro = 0;
    if (F != NULL && EstaCheiaPilha(P) == 0)
    {
        *erro = 1;
        P->vetor[P->topo] = *F;
        P->topo++;
    }
}

void Pop (pilha_de_fila* P, fila* F, int* erro)
{
    *erro = 0;
    if (F != NULL && EstaVaziaPilha(P) == 0)
    {
        *erro = 1;
        *F = P->vetor[P->topo];
        P->topo--;
    }
}
