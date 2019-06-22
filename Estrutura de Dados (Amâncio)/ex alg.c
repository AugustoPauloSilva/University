#include <stdio.h>

typedef int elem;

typedef struct no
{
    union
    {
        elem atomo;
        struct no *sublista;
    }info;
    int tipo;
    struct no *prox;
}no;

typedef struct lista
{
no *inicio;
}lista;

void profundidade (no *L, int prof, int *prof_max)
{
    no *aux=L;

    if(prof>*prof_max) *prof_max = prof;
    while (aux != NULL)
    {
        if(aux->tipo == 1) profundidade (aux->info.sublista, prof+1, prof_max);
        aux = aux->prox;
    }
}
