#include <stdio.h>

int main (){
    int dinheiro, resto, resto2, notas10, notas50;
    scanf("%d", &dinheiro);
    resto = dinheiro % 50;
    resto2 = resto % 10;
    if(resto2 == 0){
        notas50 = dinheiro / 50;
        notas10 = resto / 10;
        printf("\n\nDevem ser liberadas %d notas de 50 reais e %d de 10 reais\n\n\n\n\n\n", notas50, notas10);
    }
    else{
        printf("\n\nO valor nao pode ser sacado desse caixa\n\n\n\n\n\n\n");
    }
}
