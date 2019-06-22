#include <stdio.h>
#define TAM 10

typedef int elem;

typedef struct no
{
    elem info;
    int prox;
}no;

typedef struct banco
{
    int ini, fim, primeiro_vazio;
    no itens[TAM];
}banco;

void cria (banco *B)
{
    int i;

    for (i=0; i<TAM-1; i++)
    {
        B->itens[i].prox = i+1;
    }
    B->ini = -1;
    B->fim = -1;
    B->primeiro_vazio = 0;
}

void get_node (banco *B, int *pos)
{
    *pos = B->primeiro_vazio;
    if (B->primeiro_vazio != -1)
    {
        B->primeiro_vazio = B->itens[B->primeiro_vazio].prox;
    }
}

void free_node (banco *B, int *pos)
{

}
