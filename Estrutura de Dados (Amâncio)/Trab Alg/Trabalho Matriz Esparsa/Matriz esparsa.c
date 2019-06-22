#include <stdio.h>

typedef struct no
{
    int L,C,val;
    struct no *Lprox, *Cprox;
}no;

typedef struct matriz_esparsa
{
    no *inicio;
    int m, n;
}matriz_esparsa;

void soma (matriz_esparsa *M, int escolha, int pos, int constante)
{
    no *aux = M->inicio;// 0 É LINHA, 1 É COLUNA

    if (escolha == 0)
    {
        while (aux->L != pos)
        {
            aux = aux->Cprox;
        }
        while (aux->L != 0 && aux->C != 0)
        {
            aux->val = aux->val + constante;
            aux = aux->Lprox;
        }
    }
    if (escolha == 1)
    {
        while (aux->C != pos)
        {
            aux = aux->Lprox;
        }
        while (aux->L != 0 && aux->C != 0)
        {
            aux->val = aux->val + constante;
            aux = aux->Cprox;
        }
    }
}
