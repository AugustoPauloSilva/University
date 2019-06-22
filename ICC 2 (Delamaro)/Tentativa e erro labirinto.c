#include <stdio.h>
#define M 11
#define N 11

//L[5][5] é a saída e a posição com o valor 2 é a entrada
//O algoritmo faz a busca a partir da saída para a entrada
int L[M][N] = {
{1   ,1   ,1   ,1   ,0   ,0   ,0   ,1   ,1   ,0   ,1},
{0   ,1   ,1   ,1   ,0   ,1   ,1   ,0   ,1   ,1   ,0},
{0   ,1   ,1   ,0   ,0   ,1   ,0   ,1   ,1   ,0   ,0},
{1   ,1   ,0   ,1   ,0   ,0   ,1   ,1   ,0   ,1   ,1},
{1   ,0   ,0   ,0   ,0   ,0   ,0   ,1   ,0   ,0   ,0},
{1   ,1   ,1   ,0   ,1   ,1   ,0   ,0   ,0   ,0   ,0},
{1   ,0   ,1   ,1   ,1   ,1   ,1   ,1   ,0   ,0   ,0},
{1   ,0   ,0   ,0   ,0   ,0   ,0   ,1   ,1   ,0   ,0},
{1   ,0   ,0   ,0   ,1   ,1   ,1   ,1   ,0   ,0   ,1},
{1   ,0   ,0   ,0   ,1   ,0   ,0   ,0   ,0   ,0   ,0},
{0   ,1   ,1   ,1   ,1   ,1   ,1   ,1   ,1   ,1   ,1}};

int aux[M][N] = {0};

int busca_labirinto (int x, int y, int m, int n, int *end)
{
    if (x<0 || y<0 || x>=m || y>=n || L[x][y] == 0 || aux[x][y] == 1)
    {
        return 0;
    }
    else if(x == 0 && y == 0)
    {
        aux[x][y] = 1;
        *end = 1;
    }
    else if (L[x][y] == 1)
    {
        aux[x][y] = 1;
        if (*end != 1) busca_labirinto(x+1,y,m,n,end);
        if (*end != 1) busca_labirinto(x-1,y,m,n,end);
        if (*end != 1) busca_labirinto(x,y+1,m,n,end);
        if (*end != 1) busca_labirinto(x,y-1,m,n,end);
    }
    if (*end == 0) aux[x][y] = 0;
    return 0;
}

int main ()
{
    int end=0,i,j;
    busca_labirinto(M-1,N-1,M,N,&end);
    if (end == 0)
    {
        printf("Não foi encontrado nenhum caminho para a saída\n");
    }
    for (i=0; i<M; i++)
    {
        for (j=0; j<N; j++)
        {
            printf("%d ", aux[i][j]);
        }
        printf("\n");
    }
    return 0;
}
