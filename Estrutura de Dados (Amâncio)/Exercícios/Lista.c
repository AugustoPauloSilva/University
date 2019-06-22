#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    struct no *prox;
    int info;
} no;

typedef struct lista
{
    no *inicio, *fim;
} lista;

void inserir (lista *L, int x, int *erro)
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
        }
        if (L->fim != NULL)
        {
            L->fim->prox = p;
        }
        L->fim = p;
    }

}

void eliminar (lista *L, int *x, int *erro)
{
    no *p, *anterior;
    int teste=0;

    p=L->inicio;
    while ((p!=NULL) && (teste != 0))
    {
        if (p->info != *x)
        {
            anterior = p;
            p=p->prox;
        }
        else
        {
            if (p==L->inicio)
            {
                L->inicio=L->inicio->prox;
                if (L->inicio == NULL)
                {
                    L->fim = NULL;
                }
            }
            else if (p==L->fim)
            {
                L->fim = anterior;
                L->fim->prox = NULL;
            }
            else
            {
                anterior->prox = p->prox;
            }
            free(p);
            teste = 1;
        }
    }
}

void eliminar_rec (lista *L, no *anterior, no *atual, int *x, int *erro)
{

    if (atual != NULL)
    {
        if (atual->info != *x)
        {
            eliminar_rec (L, atual, atual->prox, x, erro);
        }
        else
        {
            if (atual==L->inicio)
            {
                L->inicio=L->inicio->prox;
                if (L->inicio == NULL)
                {
                    L->fim = NULL;
                }
            }
            else if (atual==L->fim)
            {
                L->fim = anterior;
                L->fim->prox = NULL;
            }
            else
            {
                anterior->prox = atual->prox;
            }
            free (atual);
        }
    }
}

void ordenar_lista (lista *L)
{
    int i, j;
    no *aux=L->inicio, *menor=L->inicio, *trocar=L->inicio, *anterior_t=NULL, *anterior_m=NULL;

    while (trocar->prox != NULL)
    {
        aux = trocar;
        menor = trocar;
        while (aux->prox != NULL)
        {
            if (aux->prox->info < menor->info)
            {
                anterior_m = aux;
                menor = aux->prox;
            }
            aux = aux->prox;
        }

        if (menor->info < trocar->info)
        {

            if (trocar->prox != menor)
            {
                aux = trocar->prox;
                trocar->prox = menor->prox;
                menor->prox = aux;
                if (anterior_t != NULL && anterior_m != NULL)
                {
                    anterior_m->prox = trocar;
                    anterior_t->prox = menor;
                }
                else if (anterior_m != NULL)
                {
                    L->inicio = menor;
                    anterior_m->prox = trocar;
                }
            }
            else
            {
                aux = menor->prox;
                menor->prox = trocar;
                trocar->prox = aux;
                anterior_t->prox = menor;
            }
            trocar = menor;
        }

        anterior_t = trocar;
        trocar = trocar->prox;
    }
    L->fim = trocar;
}

void printar(lista *L, no* p)
{
    if (p != NULL)
    {
        printf(" %d ", p->info);
        printar(L, p->prox);
    }
}

void inverter(lista *L){
    if(L->inicio==L->fim)return;
    no* N,*inverter,*aux;
    no* aux2;
    N=L->inicio;
    while(N->prox->prox!=NULL)N=N->prox;
        inverter=L->inicio;
        N->prox=inverter;
        L->inicio->prox=inverter->prox;
        N->prox->prox=NULL;
        aux2=N->prox;
        inverter=L->inicio;
        printar(L, L->inicio);
        while(inverter!=aux2){
            N=inverter;
            while(N->prox->prox!=aux2)N=N->prox;
            aux=inverter->prox;
            inverter->prox=N->prox;
            N->prox=aux;
            aux->prox=inverter->prox->prox;
            inverter->prox->prox=aux->prox;
            aux->prox=aux;
            aux2=aux;
            inverter=inverter->prox;
        }
}

int main ()
{   int r=42;
    lista Teste;
    Teste.fim = NULL;
    Teste.inicio = NULL;
    srand(time(NULL)+r*r);
    int erro, i, a;

    for (i=0; i<30; i++)
    {
        a=rand()%100;
        r=r+3;
        inserir(&Teste, a, &erro);
    }
    printar(&Teste, Teste.inicio);

    //ordenar_lista(&Teste);
    inverter(&Teste);
    printf("\n");
    printar(&Teste, Teste.inicio);

    return 0;
}
