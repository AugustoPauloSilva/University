#include <stdio.h>

int main (){
    char string[100], letra;
    int i, j;
    j = 0;
    i = 0;


    gets(string);
    scanf("%c", &letra);
    for(i = 0; i < 9; i++){
        if(string[i] == letra){
                j = j + 1;
        }
        printf("%d;;;;;\n", j);
    }
    printf("\n\n%d", j);
}
