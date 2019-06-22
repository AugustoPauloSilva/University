#include "Implementacao_da_fila2.h"

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
        if (F->fim < 100)
        {
            F->fim++;
        }
        else
        {
            F->fim = 0;
        }
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
        if (F->inicio < 100)
        {
            F->inicio++;
        }
        else
        {
            F->inicio = 0;
        }
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

int estaOrdenado(fila *F)
{
    int i, ordenado=1;

    if (F != NULL && F->inicio != F->fim)
    {
        for(i=F->inicio; i!=F->fim; i++)
        {
            if(F->itens[i] > F->itens[i+1])
            {
                ordenado = 0;
            }
            if(i == 99)
            {
                i = 0;
            }
        }
    }
    return ordenado;
}

int unir(fila *F1, fila *F2, fila *F3)
{
    int i=F1->inicio, j=F2->inicio, tam1=F1->total, tam2=F2->total, aux, aux2, erro;

    while (i<tam1 &&  j<tam2)
    {
        Sai(F1, &aux, &erro);
        Entra(F1, &aux, &erro);
        Sai(F2, &aux2, &erro);
        Entra(F2, &aux2, &erro);
        if (aux<aux2)
        {
            Entra(F3, &aux, &erro);
            i++;
        }
        else
        {
            Entra(F3, &aux2, &erro);
            j++;
        }
    }
}

