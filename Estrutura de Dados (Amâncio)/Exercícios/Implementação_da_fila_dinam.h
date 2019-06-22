#include <stdio.h>

typedef struct no
{
    int info;
    struct no *prox;
}no;


typedef struct fila
{
    no *inicio, *fim;
}fila;

int Entra(fila *F, int *X, int *erro);
int Sai (fila *F, int *X, int *erro);
int EstaCheia (fila *F);
int EstaVazia (fila *F);
int Cria(fila*F);
int Apaga(fila*F);
