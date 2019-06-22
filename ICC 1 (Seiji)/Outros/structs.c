#include <stdio.h>
#include <stdlib.h>


typedef struct aluno
{
    char nome[31];
    long int matricula;
    float *notas;
}aluno;

int inicializar_aluno (aluno *cara)
{
    cara->matricula = 0;
    cara->notas = (float*) calloc(6, sizeof(float));
    if (cara->notas == NULL)
    {
        return -1;
    }
    return 0;
}

void copiar (aluno *original, aluno *copia)
{
    int i=0;
    while(original->nome[i] != '\0')
    {
        copia->nome[i] = original->nome[i];
        i++;
    }
    copia->matricula = original->matricula;
    for(i=0; i<6; i++)
    {
        (*copia).notas[i] = (*original).notas[i];
    }

}

void alterar (aluno *alterar)
{
    int pos, s=0;
    float nota;
    while (s == 0)
    {
        printf ("\nDigite a nota que quer alterar\n");
        scanf("%d", &pos);
        if (pos-1 >= 6)
        {
            printf ("\nNumero invalido");
        }
        else
        {
            s = 1;
        }
    }
    printf ("\nDigite qual a nota\n");
    scanf ("%f", &nota);
    alterar->notas[pos-1] = nota;
}

void printar(aluno *estudante)
{
    int i;
    printf("\n%s", estudante->nome);
    printf("\n%d", estudante->matricula);
    for (i=0; i<6; i++)
    {
        printf("\n%.2f", estudante->notas[i]);
    }
}

void limpar(aluno *estudante)
{
    free(estudante->notas);
}

int main ()
{
    int i;

    aluno eu;
    if (inicializar_aluno(&eu) == -1)
    {
        return 1;
    }

    aluno copia;
    if (inicializar_aluno(&copia) == -1)
    {
        return 1;
    }

    printf("\nDigite o nome\n");
    gets(eu.nome);
    printf("\nDigite a matricula\n");
    scanf("%ld", &eu.matricula);

    for (i=0; i<6; i++)
    {
        printf("\nDigite a nota %d\n", i+1);
        scanf("%f", &eu.notas[i]);
    }

    printf("\n%s", eu.nome);
    printf("\n%d", eu.matricula);
    for (i=0; i<6; i++)
    {
        printf("\n%.2f", eu.notas[i]);
    }

    copiar(&eu, &copia);
    alterar(&eu);

    printf("\n\nEu");
    printar(&eu);
    printf("\n\nCopia");
    printar(&copia);

    printf("\n\n\n\n");

    limpar(&eu);
    limpar(&copia);
    return 0;
}
