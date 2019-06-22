#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no
{
    char info;
    struct no* anterior;
}no;

typedef struct pilha_dinamica
{
    no* topo;
    int tamanho;
}pilha_dinamica;

void Cria(pilha_dinamica *P)
{
    P->tamanho = 0;
    P->topo = NULL;
}

void Entra (pilha_dinamica *P, char num)
{
    no *novo;
    novo = (no*) malloc (sizeof(no));
    novo->info = num;

    if (P->topo == NULL)
    {
        novo->anterior = NULL;
    }
    else
    {
        novo->anterior = P->topo;
    }
    P->tamanho++;
    P->topo = novo;
}

int Sai (pilha_dinamica *P, char *num)
{
    no *aux;

    if (P->topo != NULL)
    {
        *num = P->topo->info;
        aux = P->topo;
        P->topo = P->topo->anterior;
        P->tamanho--;
        free(aux);
        return 1;
    }

    return 0;
}

void Input (char str[])
{
    char *aux, str2[5000], letra;
    int i, aux2=0, j, erro;

    pilha_dinamica Pilha;
    Cria(&Pilha);

    fgets(str, 5000, stdin);
    aux = strtok (str," ");

    while (aux != NULL)
    {
        i = 0;
        j = 0;

        j = strlen(str2);

        while (aux[i] != '\0' && aux[i] != '.' && aux[i] != '\n')
        {
            Entra(&Pilha, aux[i]);
            i++;
        }
        if (aux[i] == '.')
        {
            aux2 = 1;
        }
        i=0;
        while (Pilha.tamanho > 0)
        {
            Sai(&Pilha, &letra);
            str2[j+i] = letra;
            i++;
        }
        if (aux2 != 1)
        {
            str2[i+j] = ' ';
        }
        aux = strtok(NULL," ");
    }
    str2[i+j] = '\0';
    i=0;
    while (str2[i] != '\0')
    {
        str[i] = str2[i];
        i++;
    }

    printf("%s.", str2);

}

int main()
{
    char str[5000];

    Input(str);


    return 0;
}
