#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no
{
    struct no *prox;
    int info;
} no;

typedef struct no_pilha
{
    int ite;
    struct no_pilha* anterior;
}no_pilha;

typedef struct lista
{
    no *inicio, *fim;
} lista;

typedef struct pilha
{
    no_pilha* topo;
    int tamanho;
}pilha;

void printar_lista(lista *L, no* p)
{
    if (p != NULL)
    {
        printf("%d ", p->info);
        printar_lista(L, p->prox);
    }
}

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
        else
        {
            L->fim->prox = p;
        }
        L->fim = p;
    }

}

void eliminar_inicio (lista *L, int *erro)
{
    no *p=L->inicio;

    if (L->inicio != NULL)
    {
        L->inicio=L->inicio->prox;
        if (L->inicio == NULL)
        {
            L->fim = NULL;
        }
        free(p);
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

void Empilhar(pilha* pilha, int ite)
{
    no_pilha* proximo;

    proximo = (no_pilha*) malloc (sizeof(no_pilha));
    proximo->ite = ite;
    proximo->anterior = pilha->topo;
    pilha->topo = proximo;
    pilha->tamanho++;
}

int Desempilhar(pilha* pilha)
{
    no_pilha* aux=NULL;
    int x;

    if (pilha->tamanho > 0)
    {
        x = pilha->topo->ite;
        aux = pilha->topo->anterior;
        free(pilha->topo);
        pilha->topo = aux;
        pilha->tamanho--;
        return x;
    }
    return;
}

void Inverter (lista *L3)
{
    pilha Inv;
    Inv.topo = NULL;
    Inv.tamanho = 0;

    int erro, info;

    no *aux = L3->inicio;

    while (L3->inicio != NULL)
    {
        aux = L3->inicio;
        Empilhar (&Inv, aux->info);
        eliminar_inicio (L3, &erro);
    }
    while (Inv.tamanho > 0)
    {
        info = Desempilhar(&Inv);
        inserir (L3, info, &erro);
    }

}

void Uniao (lista *L1, lista *L2, lista *L3)
{
    no *aux1, *aux2;
    int erro;

    aux1 = L1->inicio;
    aux2 = L2->inicio;

    while (aux1 != NULL && aux2 != NULL)
    {
        if (aux1->info < aux2->info)
        {
            inserir(L3, aux1->info, &erro);
            aux1 = aux1->prox;
        }
        else
        {
            inserir(L3, aux2->info, &erro);
            aux2 = aux2->prox;
        }
    }
    while (aux1 != NULL)
    {
        inserir(L3, aux1->info, &erro);
        aux1 = aux1->prox;
    }
    while (aux2 != NULL)
    {
        inserir(L3, aux2->info, &erro);
        aux2 = aux2->prox;
    }
    Inverter (L3);

}

void Input (lista *L)
{
    char str[5000];
    char *aux;
    int num, i, erro;

    fgets(str, 5000, stdin);
    aux = strtok (str," ");

    while (aux != NULL)
    {
        num = 0;
        i = 0;

        while (i < strlen(aux) && aux[i] != '\n')
        {
            num = num*10 + (aux[i]-'0');
            i++;
        }

        inserir(L, num, &erro);

        aux = strtok(NULL," ");
    }


}

void limpar_lista (lista *L)
{
    int erro;

    while (L->inicio != NULL)
    {
        eliminar_inicio(L, &erro);
    }
}

int main ()
{
    lista L1, L2, L3;
    L1.inicio = L2.inicio  = L1.fim = L2.fim = L3.inicio = L3.inicio = NULL;

    char str[100];
    int i=0, num, erro;

    Input(&L1);
    Input(&L2);

    Uniao (&L1, &L2, &L3);
    printar_lista (&L3, L3.inicio);

    limpar_lista(&L1);
    limpar_lista(&L2);
    limpar_lista(&L3);

    return 0;
}
