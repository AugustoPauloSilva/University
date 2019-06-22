#include <stdio.h>

typedef struct Pilha
{
    int vetor[1000];
    int topo;
}pilha;

int Create (pilha* P)
{
    //Pilha criada na main
}

int Empty (pilha* P)
{
    P->topo = -1;
    return 0;
}

int Isfull (pilha* P)
{
    if (P->topo == 999)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Isempty (pilha* P)
{
    if (P->topo == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Push (pilha* P, int x)
{
    P->topo++;
    P->vetor[P->topo] = x;
    return 0;
}

int Pop (pilha* P)
{
    int x;
    x = P->vetor[P->topo];
    P->topo--;
    return x;
}

int Top (pilha* P)
{
    int x;
    x = P->vetor[P->topo];
    return x;
}

void Imprimir (pilha P)
{
    int x;
    //pilha aux;
    //Create(&aux);

    printf("\nValores da pilha");
    while (Isempty(&P) != 1)
    {
        x = Pop(&P);
        printf("%d ", x);
    }

    /*int i,
    printf("\nElementos da Pilha\n");
    for (i=P->topo; i>0; i--)
    {
        printf("%d ", P->vetor[i]);
    }*/
}

int Iguais (pilha P1, pilha P2)
{
    int x1, x2, iguais = 1;

    while (Isempty(&P1) != 1 && Isempty(&P2) != 1)
    {
        x1 = Pop(&P1);
        x2 = Pop(&P2);
        if (x1 != x2)
        {
            return 0;
        }
    }
    if (Isempty(&P1) != Isempty(&P2))
    {
        return 0;
    }
    return 1;
}

void Inverter(pilha *P)
{
    pilha aux;
    Create(&aux);

    int x;

    while (Isempty(P) != 1)
    {
        x = Pop(P);
        Push(&aux, x);
    }
    while (Isempty(&aux) != 1)
    {
        x = Pop(&aux);
        Push(P, x);
    }
}

int main()
{
    int e=0;
    pilha P;

    while (e != 0)
    {
        printf("\nEscolha qual funcao\n[1] Push\n[2] Pop\n[3] Top\n[4] Empty\n[5] Isempty\n[6] Isfull\n[7] Top\n[8] Imprimir\n[9] Iguais\n[10] Inverter\n");
        scanf("%d", &e);
    }

    return 0;
}
