#include <stdio.h>

typedef struct fila
{
    int inicio, fim, total;
    int itens[100]
}fila;

int Entra(fila *F, int *X, int *erro);
int Sai (fila *F, int *X, int *erro);
int EstaCheia (fila *F);
int EstaVazia (fila *F);
int Cria(fila*F);
int Apaga(fila*F);
int estaOrdenado(fila *F);
int unir(fila *F1, fila *F2, fila *F3);
