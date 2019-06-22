#include "Conjunto.h"

int Criar_Conjunto(conjunto* Conjunto)
{
    int i=1;
    Conjunto->vetor = (int*) calloc(sizeof(int), 100);
    if (Conjunto->vetor == NULL)
    {
        return -1;
    }
    return 0;
}

void Inserir_valor(conjunto* Conjunto)
{
    int i=0;
    while (i != -1)
    {
        printf("\nDigite o valor desejado para o conjunto\n('-1' para sair)\n");
        scanf("%d", &i);

        if (i > -1 && i < 100)
        {
            Conjunto->vetor[i] = 1;
        }
    }
}

void Remover_valor(conjunto* Conjunto)
{
    int i=0;
    while (i != -1)
    {
        printf("\nDigite o valor que deseja remover do conjunto\n('-1' para sair)\n");
        scanf("%d", &i);

        if (i > -1 && i < 100)
        {
            Conjunto->vetor[i] = 0;
        }
    }
}

void Membro(conjunto* Conjunto)
{
    int i=0;
    while (i != -1)
    {
        printf("\nDigite o valor que deseja verificar no conjunto\n('-1' para sair)\n");
        scanf("%d", &i);

        if (i > -1 && i < 100)
        {
            if (Conjunto->vetor[i] == 1)
            {
                printf("\nO valor %d esta no conjunto\n", i);
            }
            else
            {
                printf("\nO valor %d nao esta no conjunto\n", i);
            }
        }
        else if (i != -1)
        {
            printf("\nErro: Valor invalido");
        }
    }
}

void Min (conjunto* Conjunto)
{
    int i=-1, j=0;
    while (i < 100 && j == 0)
    {
        i++;
        if(Conjunto->vetor[i] == 1)
        {
            j = 1;
        }
    }
    if (j == 1)
    {
        printf("\nO menor valor do conjunto eh %d\n", i);
    }
}

void Max (conjunto* Conjunto)
{
    int i=100, j=0;
    while (i > 0 && j == 0)
    {
        i--;
        if(Conjunto->vetor[i] == 1)
        {
            j = 1;
        }
    }
    if (j == 1)
    {
        printf("\nO maior valor do conjunto eh %d\n", i);
    }
}

void Atribuir (conjunto* Conjunto1, conjunto* Conjunto2)
{
    int i;
    for (i=0; i<100; i++)
    {
        Conjunto1->vetor[i] = Conjunto2->vetor[i];
    }
}

void Igual (conjunto* Conjunto1, conjunto* Conjunto2)
{
    int i=-1, j;
    while( i >= -1 && i < 100 )
    {
        i++;
        if(Conjunto1->vetor[i] != Conjunto2->vetor[i]) j=1;
    }

    if( j == 1 ) printf("\n Nao sao compativeis. \n");
    else printf("\n Compativeis !\n");
}

void imprimir(conjunto* Conjunto)
{
    int i=0;
    printf("\n\n");
    for(i=0; i<100; i++)
    {
        if(Conjunto->vetor[i] == 1) printf(" %d", i);
    }
}

void Uniao (conjunto* Conjunto1, conjunto* Conjunto2, conjunto* Conjunto3)
{
    int i;
    printf("\nConjunto Resultante\n");
    for (i=0; i<100; i++)
    {
        if (Conjunto1->vetor[i] == 1 || Conjunto2->vetor[i] == 1)
        {
            Conjunto3->vetor[i] = 1;
            printf(" %d ", i);
        }
    }
    printf("\n----------------------------------------------------------\n");
}

void Interseccao (conjunto* Conjunto1, conjunto* Conjunto2, conjunto* Conjunto3)
{
    int i;
    printf("\nConjunto Resultante\n");
    for (i=0; i<100; i++)
    {
        if (Conjunto1->vetor[i] == 1 && Conjunto2->vetor[i] == 1)
        {
            Conjunto3->vetor[i] = 1;
            printf(" %d ", i);
        }
    }
    printf("\n-----------------------------------------------------------\n");
}

void Diferenca (conjunto* Conjunto1, conjunto* Conjunto2, conjunto* Conjunto3)
{
    int i;
    printf("\nConjunto Resultante\n");
    for (i=0; i<100; i++)
    {
        if(Conjunto1->vetor[i] == 1 && Conjunto2->vetor[i] == 0)
        {
            Conjunto3->vetor[i] = 1;
            printf(" %d ", i);
        }
    }
    printf("\n-----------------------------------------------------------\n");
}
