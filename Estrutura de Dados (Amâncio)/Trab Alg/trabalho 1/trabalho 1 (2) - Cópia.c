#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct contato
{
	char nome[100];
	char endereco[100];

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
    int e=0;

    while(e!=1)
    {
        printf("\nDigite o nome do contato\n");
        fflush(stdin);
        gets(Nome);
        printf("\nDigite o endereco do contato\n");
        fflush(stdin);
        gets(Endereco);
        printf("\nNome: %s\nEndereco: %s\n\nIsso esta correto?\n(1)Sim   (0)Nao\n", Nome, Endereco);
        scanf("%d", &e);
    }
}

int inserir_contato (agenda* A)
{
    int i, aux=0, aux2=0;
    char nome[100], endereco[100];
    ler_dados(nome, endereco);

    if (A->num_pessoas < A->tam_max)
    {
        for (i=0; i<100; i++)
        {
            if (nome[i] != '\0' && aux == 0)
            {
                A->c[A->num_pessoas].nome[i] = nome[i];
            }
            else
            {
                aux = 1;
            }
            if (endereco[i] != '\0' && aux2 == 0)
            {
                A->c[A->num_pessoas].endereco[i] = endereco[i];
            }
            else
            {
                aux2 = 1;
            }
        }
        A->num_pessoas = A->num_pessoas + 1;
    }
    else
    {
        printf("\nO contato nao pode ser adicionado\n");
        return 0;
    }

	return 1;
}

void buscar_contato(agenda* a){
    int cont, esta=0;
    char nome[100];

    printf("\nQual nome gostaria de consultar?\n");
    fflush(stdin);
    gets(nome);

    for(cont = 0; cont< a->num_pessoas; cont++)
        if(strcmp(nome, a->c[cont].nome) == 0) esta=1;

    if(esta==1) printf("\n%s esta na agenda\n\n", nome);
    else printf("\nNao esta na agenda\n\n");

}

void busca_endereco(agenda* a){
    int cont, esta=0;
    char nome[100];

    printf("\nEndereco de quem gostaria de consultar?\n");
    fflush(stdin);
    gets(nome);

    for(cont = 0; cont< a->num_pessoas; cont++){
        if(strcmp(nome, a->c[cont].nome) == 0){
                esta=1;
                printf("\nEndereco: %s\n\n", a->c[cont].endereco);
                break;
        }
    }
    if(esta==0) printf("\n%s nao esta na agenda\n\n", nome);

}

void riscar_agenda(agenda* a){
    int cont, esta=0, cont2;
    char nome[100];

    printf("\nQuem voce gostaria de riscar da agenda?\n");
    fflush(stdin);
    gets(nome);

    for(cont = 0; cont< a->num_pessoas; cont++)
        if(strcmp(nome, a->c[cont].nome) == 0){
                (a->num_pessoas)--;
                for(cont2 = cont; cont2< a->num_pessoas; cont2++) a->c[cont2] = a->c[cont2+1];
                esta=1;
                printf("\n%s riscado\n\n", nome);
                break;
        }

    if(esta==0) printf("\n%s nao esta na agenda\n\n", nome);


}

int main()
{
    agenda *C;
    int tamanho, e=0, i;

    C = (agenda*) malloc (sizeof(agenda));
    printf("Digite o tamanho de sua agenda\n");
    scanf("%d", &tamanho);
    inicializar_agenda(C, tamanho);

    while (e != -1)
    {
        printf("\n===Agenda===\n");
        printf("(1) Inserir Contato\n");
        printf("(2) Remover Contato\n");
        printf("(3) Buscar Contato\n");
        printf("(4) Buscar Endereco\n");
        printf("(0) Sair\n");
        scanf("%d", &e);
        if(e==1)
        {
            inserir_contato(C);
        }
        else if(e==2)
        {
            riscar_agenda(C);
        }
        else if(e==3)
        {
            buscar_contato(C);
        }
        else if(e==4)
        {
            busca_endereco(C);
        }
        else if(e==0)
        {
            e = -1;
        }
        for (i=0; i<C->num_pessoas; i++)
        {
            printf("\nNome: %s\nEndereco: %s\n", C->c[i].nome, C->c[i].endereco);
        }
    }

    return 0;
}
