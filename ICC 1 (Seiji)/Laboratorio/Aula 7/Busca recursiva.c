#include <stdio.h>


//Augusto Paulo Silva   Nº USP 9266639

int busca(int vetor[], int b, int fim, int inicio){
    int x;
    if(b < vetor[inicio] || b > vetor[fim]){
        return -1;
    }
    x = (inicio + fim)/2;
    if(vetor[x] > b){
        fim = x;
        return busca (vetor, b, fim, inicio);
    }
    else if(vetor[x] < b){
        inicio = x;
        return busca (vetor, b, fim, inicio);
    }
    return x;
}



int main (){
    int v[100], buscar, fim, inicio, x;
    printf("\nDigite o numero que devo procurar qual posicao inicia e finaliza a busca \n");
    scanf("%d %d %d", &buscar, &inicio, &fim);

    x = 0;
    while(99 >= x){
        v[x] = x;
        x++;
    }

    x = busca(v,buscar,fim,inicio);

    if(x != -1){
        printf("\n\nposicao %d\n\n\n\n\n\n", x);
    }
    else{
        printf("\n\nO numero digitado nao esta no intervalo\n\n\n\n\n\n");
    }
    return 0;
}
