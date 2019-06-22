#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int elem;

typedef struct no
{
    int v_vizinho;
    struct no *prox_vizinho;
}no;

typedef struct no_aresta
{
    no *vizinho;
    struct no_aresta *prox_aresta;
    int vertice;
}no_aresta;

typedef struct lista_aresta
{
    no_aresta *inicio;
}lista_aresta;

void Cria_Lista_Aresta (lista_aresta *L)
{
    L->inicio = NULL;
}

void Entra_Lista_Aresta (lista_aresta *L, elem num)
{
    int i;
    no_aresta *novo;
    novo = (no_aresta*) malloc (sizeof(no_aresta));

    novo->vertice = num;
    if (L->inicio != NULL)
    {
        novo->prox_aresta = L->inicio;
    }
    else
    {
        novo->prox_aresta = NULL;
    }
    L->inicio = novo;
    novo->vizinho = NULL;
}

void Sai_Lista_Aresta (lista_aresta *L, elem num)
{
    no_aresta *aux = L->inicio, *anterior=NULL;
    while (aux != NULL)
    {
        if (aux->vertice == num)
        {
            if (L->inicio->prox_aresta != NULL)
            {
                if (anterior == NULL)
                {
                    L->inicio = L->inicio->prox_aresta;
                }
                else
                {
                    anterior->prox_aresta = aux->prox_aresta;
                }
            }
            else
            {
                L->inicio = NULL;
            }
            free(aux);
            aux = NULL;
        }
        else
        {
            anterior = aux;
            aux = aux->prox_aresta;
        }
    }
}

int Esta_Lista_Aresta(lista_aresta *L, int num)
{
    no_aresta *aux = L->inicio;

    while (aux != NULL)
    {
        if (aux->vertice == num)
        {
            return 1;
        }
        aux = aux->prox_aresta;
    }
    return 0;
}

void Entra_Lista_Vizinhos(no_aresta *L, elem num)
{
    int i;
    no *novo, *aux3;
    novo = (no*) malloc (sizeof(no));

    novo->v_vizinho = num;

    if (L->vizinho != NULL)
    {
        novo->prox_vizinho = L->vizinho;
    }
    else
    {
        novo->prox_vizinho = NULL;
    }

    L->vizinho = novo;
}

void Sai_Lista_Vizinho (no *L, elem num)
{
    no *aux = L, *anterior=NULL;
    while (aux != NULL)
    {
        if (aux->v_vizinho == num)
        {
            if (L->prox_vizinho != NULL)
            {
                if (anterior == NULL)
                {
                    L = L->prox_vizinho;
                }
                else
                {
                    anterior->prox_vizinho = aux->prox_vizinho;
                }
            }
            else
            {
                L = NULL;
            }
            free(aux);
            aux = NULL;
        }
        else
        {
            anterior = aux;
            aux = aux->prox_vizinho;
        }
    }
}

int Esta_Lista_Vizinho(no *L, int num)
{
    no *aux = L;

    while (aux != NULL)
    {
        if (aux->v_vizinho == num)
        {
            return 1;
        }
        aux = aux->prox_vizinho;
    }
    return 0;
}

typedef struct no_lista
{
    struct no_lista *prox;
    elem info;
} no_lista;

typedef struct lista
{
    no_lista *inicio, *fim;
} lista;

void Cria_Lista (lista *L)
{
    L->fim = NULL;
    L->inicio = NULL;
}

void Entra_Lista (lista *L, elem num)
{
    no_lista *novo;
    novo = (no_lista*) malloc (sizeof(no_lista));
    int i;

    novo->info = num;
    if (L->inicio == NULL)
    {
        L->inicio = novo;
    }
    else
    {
        L->fim->prox = novo;
    }
    L->fim = novo;
    novo->prox = NULL;
}

void Sai_Lista (lista *L, elem num)
{
    no_lista *aux = L->inicio, *anterior=NULL;
    while (aux != NULL)
    {
        if (aux->info == num)
        {
            if (L->inicio != L->fim)
            {
                if (anterior == NULL)
                {
                    L->inicio = L->inicio->prox;
                }
                else if (aux->prox == NULL)
                {
                    L->fim = anterior;
                }
                else
                {
                    anterior->prox = aux->prox;
                }
            }
            else
            {
                L->fim = NULL;
                L->inicio = NULL;
            }
            free(aux);
            aux = NULL;
        }
        else
        {
            anterior = aux;
            aux = aux->prox;
        }
    }
}

int Esta_Lista (lista *L, elem num)
{
    no_lista *aux = L->inicio;

    while (aux != NULL)
    {
        if (aux->info == num)
        {
            return 1;
        }
        aux = aux->prox;
    }

    return 0;
}

int grau (no_aresta *vertice)
{
    int i=0;
    no *aux = vertice->vizinho;

    while (aux != NULL)
    {
        i++;
        aux = aux->prox_vizinho;
    }
    return i;
}

int encontra_vizinho (no_aresta *vertice, no *vizinho)
{
    no *aux = vertice->vizinho;

    while (aux != NULL)
    {
        if (aux->v_vizinho == vizinho->v_vizinho)
        {
            return 1;
        }
        aux = aux->prox_vizinho;
    }
    return 0;
}

float grau_medio_vizinhos (no_aresta *vertice, lista_aresta *L)
{
    int i,j=0,*graus;
    float soma=0;
    no *aux = vertice->vizinho;
    no_aresta *v_vizinho;

    if (aux != NULL)
    {
        i = grau(vertice);
        graus = (int*) malloc (i * sizeof (int));
        aux = vertice->vizinho;

        while (j<i)
        {
            v_vizinho = L->inicio;
            while (v_vizinho->vertice != aux->v_vizinho)
            {
                v_vizinho = v_vizinho->prox_aresta;
            }
            graus[j] = grau(v_vizinho);

            soma = soma + graus[j];
            j++;
            aux = aux->prox_vizinho;
        }
        soma = soma/i;
        free(graus);

        return soma;
    }
    else
    {
        return 0;
    }
}

int n_arestas_vertices_vizinhos (no_aresta *vertice, lista_aresta *L)
{
    int i=grau(vertice),j=0, cont=0;
    no *aux = vertice->vizinho, *aux2, *aux_vizinho;
    no_aresta *v_vizinho;

    if (aux != NULL && aux->prox_vizinho != NULL)
    {
        while (j<i)
        {
            v_vizinho = L->inicio;
            while (v_vizinho->vertice != aux->v_vizinho)
            {
                v_vizinho = v_vizinho->prox_aresta;
            }
            aux_vizinho = v_vizinho->vizinho;
            while (aux_vizinho != NULL)
            {
                aux2 = vertice->vizinho;
                if (encontra_vizinho(vertice,aux_vizinho)==1)
                {
                    cont++;
                }

                aux_vizinho = aux_vizinho->prox_vizinho;
            }

            j++;
            aux = aux->prox_vizinho;
        }

        return cont/2;
    }
    else
    {
        return 0;
    }
}

float calcula_coeficiente (no_aresta *vertice, lista_aresta *L)
{
    int e, K;
    float coeficiente;

    K = grau(vertice);
    if (K > 1)
    {
        e = n_arestas_vertices_vizinhos(vertice,L);
    }
    else
    {
        return 0;
    }

    coeficiente = 2*e;
    coeficiente = coeficiente/(K *(K-1));

    return coeficiente;
}

void encontra_grau_hierarquico (no_aresta *vertice, lista_aresta *L, int distancia, lista *P, lista *proibido)
{
    no *aux = vertice->vizinho;
    no_aresta *v_vizinho;


    if (distancia == 1)
    {
        while (aux != NULL)
        {
            if (Esta_Lista(proibido, aux->v_vizinho) == 0)
            {
                Entra_Lista(P,aux->v_vizinho);
                Entra_Lista(proibido,aux->v_vizinho);
            }
            aux = aux->prox_vizinho;
        }
    }
    else
    {
        while (aux != NULL)
        {
            if (Esta_Lista(proibido, aux->v_vizinho) == 0)
            {
                Entra_Lista(P,aux->v_vizinho);
                Entra_Lista(proibido,aux->v_vizinho);
            }
            aux = aux->prox_vizinho;
        }
        aux = vertice->vizinho;
        while (aux != NULL)
        {
            if (Esta_Lista(P,aux->v_vizinho) == 1)
            {
                Sai_Lista(P,aux->v_vizinho);

                v_vizinho = L->inicio;
                while (v_vizinho->vertice != aux->v_vizinho)
                {
                    v_vizinho = v_vizinho->prox_aresta;
                }
                encontra_grau_hierarquico(v_vizinho, L, distancia-1, P, proibido);
            }
            aux = aux->prox_vizinho;
        }
    }
}

int calcula_grau_hierarquico(no_aresta *vertice, lista_aresta *L, int distancia)
{
    int i=0;
    no_lista *aux;
    lista P, proibido;

    if (L->inicio->prox_aresta != NULL)
    {
        Cria_Lista(&P);
        Cria_Lista(&proibido);

        encontra_grau_hierarquico(vertice, L, distancia, &P, &proibido);

        aux = P.inicio;
        while (aux != NULL)
        {
            i++;
            aux = aux->prox;
        }

        return i-1;
    }
    else
    {
        return 0;
    }
}

int main ()
{
    int i, j=0, arestas, num[2], o_cara;
    int VALOR[2];
    float VALOR2[2];
    char str[10000], *aux;
    lista_aresta L;
    no_aresta *aux2;

    fgets(str, 10000, stdin);
    num[0] = atoi(str);
    o_cara = num[0];
    Entra_Lista_Aresta(&L, num[0]);

    fgets(str, 10000, stdin);
    arestas = atoi(str);

    for (i=0; i<arestas; i++)
    {
        fgets(str, 10000, stdin);
        aux = strtok (str," ");
        j=0;

        while (j<2)
        {
            num[j] = atoi(aux);
            aux = strtok(NULL," ");
            j++;
        }

        if (Esta_Lista_Aresta(&L, num[0]) == 0)
        {
            Entra_Lista_Aresta(&L, num[0]);
        }

        if (Esta_Lista_Aresta(&L, num[1]) == 0)
        {
            Entra_Lista_Aresta(&L, num[1]);
        }

        aux2 = L.inicio;
        while (aux2->vertice != num[0])
        {
            aux2 = aux2->prox_aresta;
        }
        if (Esta_Lista_Vizinho(aux2->vizinho, num[1]) == 0)
        {
            Entra_Lista_Vizinhos(aux2, num[1]);
        }

        aux2 = L.inicio;
        while (aux2->vertice != num[1])
        {
            aux2 = aux2->prox_aresta;
        }
        if (Esta_Lista_Vizinho(aux2->vizinho, num[0]) == 0)
        {
            Entra_Lista_Vizinhos(aux2, num[0]);
        }
    }

    aux2 = L.inicio;
    while (aux2->vertice != o_cara)
    {
        aux2 = aux2->prox_aresta;
    }
    VALOR[0] = grau(aux2);
    VALOR2[0] = grau_medio_vizinhos(aux2,&L);
    VALOR2[1] = calcula_coeficiente(aux2, &L);
    VALOR[1] = calcula_grau_hierarquico(aux2,&L,2);

    printf("%d\n", VALOR[0]);
    printf("%.2f\n", VALOR2[0]);
    printf("%.2f\n", VALOR2[1]);
    printf("%d", VALOR[1]);

    return 0;
}
