#include "TADs.h"

int main ()
{
    char str[100], str2[100], letra;
    int i=0;

    pilha_dinamica Pilha, Pilha2, aux;
    Cria_Pilha(&Pilha); Cria_Pilha(&Pilha2); Cria_Pilha(&aux);

    fgets(str, 100, stdin); fgets(str2, 100, stdin);

    while (str[i] != '\0')
    {
        Entra_Pilha(&Pilha, str[i]);
        i++;
    }
    i=0;
    while (str2[i] != '\0')
    {
        Entra_Pilha(&Pilha2, str2[i]);
        i++;
    }
    while (Pilha.topo != NULL && Pilha2.topo != NULL)
    {
        if (Pilha.topo->info == Pilha.topo->info)
        {
            Sai_Pilha(&Pilha, &letra);
            Sai_Pilha(&Pilha2, &letra);
            while (aux.topo != NULL)
            {
                 Sai_Pilha(&aux, &letra);
                 Entra_Pilha(&Pilha2, letra);
            }
        }
        else
        {
            Sai_Pilha(&Pilha2, &letra);
            Entra_Pilha(&aux, letra);
        }
    }
    if (Pilha.topo == NULL && Pilha2.topo == NULL)
    {
        printf("\n\nE palindromo");
    }
    else
    {
        printf("\n\nNao e palindromo");
        while (Pilha.topo != NULL)
        {
             Sai_Pilha(&Pilha, &letra);
        }
        while (Pilha2.topo != NULL)
        {
             Sai_Pilha(&Pilha2, &letra);
        }
    }
    return 0;
}
