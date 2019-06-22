#include <stdio.h>
#include <stdlib.h>

typedef struct item
{
    int item;
}item;

typedef struct NO
{
    item* ite;
    struct No* anterior;
}No;

typedef struct pilha_dinamica
{
    No* topo;
    int tamanho;
}pilha_dinamica;

void Empilhar(pilha_dinamica* pilha, item* ite)
{
    No* proximo;

    proximo = (No*) malloc (sizeof(No));
    *(proximo->ite) = *ite;
    proximo->anterior = pilha->topo;
    pilha->topo = proximo;
}

item* Desempilhar(pilha_dinamica* pilha)
{
    No* aux=NULL;
    item* x;

    if (pilha->tamanho > 0)
    {
        *x = *(pilha->topo->ite);
        aux = pilha->topo->anterior;
        free(pilha->topo);
        pilha->topo = aux;
        pilha->tamanho--;
        return x;
    }
    return NULL;
}

int main ()
{

    return 0;
}
