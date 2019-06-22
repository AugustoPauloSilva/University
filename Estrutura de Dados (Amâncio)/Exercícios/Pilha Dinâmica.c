#include <stdio.h>

typedef struct NO
{
    int* item;
    struct No* anterior;
}No;

typedef struct pilha_dinamica
{
    No* topo;
    int tamanho;
}pilha_dinamica;

pilha_dinamica* criar_pilha ()
{
    pilha_dinamica* P = NULL;
    P = (pilha_dinamica*) malloc (sizeof(pilha_dinamica));
    if (P == NULL)
    {
        return -1;
    }

    P->topo = NULL;
    P->tamanho = 0;

    return 0;
}

int apagar_pilha (pilha_dinamica* P)
{
    No* aux;
    while (P->tamanho > 0)
    {
        aux = P->topo->anterior;
        //free(P->topo);
        P->topo = aux;
        P->tamanho--;
    }
    //free(P);
}
