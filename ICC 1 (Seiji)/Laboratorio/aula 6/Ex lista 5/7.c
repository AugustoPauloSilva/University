#include <stdio.h>

int main (){
    char string[100];
    int fim = 0, teste = 0, i = 0;

    scanf("%[^\n]%*c", &string);
    while(string[fim] != '\0'){
        fim = fim + 1;
    }
    fim = fim - 1;

    while(i < fim - i && teste != 1){
        if (string[i] != string[fim-i]){
            teste = 1;
        }
        i = i + 1;
    }
    if (teste == 0){
        printf("\nE um palindromo\n\n\n\n\n\n\n");
    }
    else{
        printf("\nNao e um palindromo\n\n\n\n\n\n\n\n");
    }
    return 0;
}
