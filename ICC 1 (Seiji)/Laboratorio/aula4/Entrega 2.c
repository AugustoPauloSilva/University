#include <stdio.h>//Augusto Paulo Silva  9266639

int main(){
    char string[25], letra;
    int i, j;
    j = 0;
    i = 0;


    printf("Digite letras entao digite mais uma para descobrir o numero de repeticoes\n");
    gets(string);
    scanf("%c", &letra);
    for(i = 0; i <= 24; i = i + 1){
        if(string[i] == letra){
            j = j + 1;
        }
    }
    printf("\nO numero de repeticoes e %d\n\n\n\n\n\n\n", j);
}
