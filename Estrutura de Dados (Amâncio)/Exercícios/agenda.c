#include <stdlib.h>
#include <stdio.h>

typedef struct contato
{
	char* nome;
	char* endereco;

} contato;

typedef struct agenda
{
    contato* c;
    int tam_max;
    int num_pessoas;

}agenda;

void inicializar_agenda(agenda *A, int tam)
{
	A->c = (contato*) malloc (sizeof(contato) *tam);
	A->num_pessoas = 0;
	A->tam_max = tam;
}

void ler_dados(char* Nome, char* Endereco)
{
    gets(Nome);
    gets(Endereco);
}

int inserir_contato (agenda* A)
{
    char *nome, *endereco;
    ler_dados(nome, endereco);

    if (A->num_pessoas < A->tam_max)
    {
        A->c[A->num_pessoas].nome = nome;
        A->c[A->num_pessoas].endereco = endereco;
        A->num_pessoas = A->num_pessoas + 1;
    }
    else
    {
        return 0;
    }

	return 1;
}

int main()
{
    agenda C;
    int tamanho, e=0;

    printf("Digite o tamanho de sua agenda\n");
    scanf("%d", &tamanho);
    inicializar_agenda(&C, tamanho);

    while (e != -1)
    {
        printf("===Agenda===");
        printf("\n(1) Inserir Contato\n");
        printf("(2) Remover Contato\n");
        printf("(3) Buscar Contato\n");
        printf("(0) Sair\n");
        scanf("%d", &e);
        if(e==1)
        {

        }
        else if(e==2)
        {

        }
        else if(e==3)
        {

        }
        else if(e==0)
        {
            e = -1;
        }
    }

    return 0;
}
