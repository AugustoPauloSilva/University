#include <stdio.h>

#define TamFila 100
#define TamPilha 1000

typedef char elemFila;

typedef struct fila
{
    int inicio, fim, total;
    elemFila itens[TamFila];
    int tipo;
}fila;

typedef struct Pilha_de_Fila
{
    fila vetor[TamPilha];
    int topo;
}pilha_de_fila;

int Entra (fila *F, elemFila *X, int *erro);
int Sai (fila *F, elemFila *X, int *erro);
int EstaCheia (fila *F);
int EstaVazia (fila *F);
int CriaFila (fila* F);

int CriaPilha (pilha_de_fila* P);
int EstaVaziaPilha (pilha_de_fila* P);
int EstaCheiaPilha (pilha_de_fila* P);
void Push (pilha_de_fila* P, fila* F, int* erro);
void Pop (pilha_de_fila* P, fila* F, int* erro);
