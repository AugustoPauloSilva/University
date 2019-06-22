#include <stdio.h>

int fibonacci (int n){
    if (n==0){return 0;}
    else if (n==1){return 1;}
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
/*int seq(int valor, int vetor[],int n){
    if(valor>n){return -1;}
    else if(valor==vetor[n]){return n;}
    else if(valor<vetor[n]){return seq(valor,vetor,n+1);}
}*/

int busca_ite(int vetor[], int valor, int n){
    int x;
    int fim = n-1, inicio = 0;
    if(valor < vetor[inicio] || valor > vetor[fim]){
        return -1;
    }
    x = (inicio + fim)/2;
    while(vetor[x] != valor){
        if(vetor[x] > valor){
            fim = x;
        }
        else if(vetor[x] < valor){
            inicio = x;
        }
        x = (inicio + fim)/2;
    }
    return x;
}

int busca_re(int vetor[], int valor, int fim, int inicio){
    int x;
    if(valor < vetor[inicio] || valor > vetor[fim]){
        return -1;
    }
    x = (inicio + fim)/2;
    if(vetor[x] > valor){
        fim = x - 1;
        return busca_re (vetor, valor, fim, inicio);
    }
    else if(vetor[x] < valor){
        inicio = x + 1;
        return busca_re (vetor, valor, fim, inicio);
    }
    return x;
}

void hanoi(char ori, char dst, char aux, int nro)
{
    if(nro == 1)
    {
        printf("Move de");
    }
}

int main (){
    int n;
    scanf("%d",&n);
    n=fibonacci(n);
    printf("%d",n);
    return 0;
}
