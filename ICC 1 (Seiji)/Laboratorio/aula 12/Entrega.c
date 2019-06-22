#include <stdio.h>
//Augusto Paulo Silva NºUsp 9266639

int main () {
    FILE*Arquivo;
    char texto;
    int i=0;



    Arquivo = fopen("dados1.txt","r");
    if (Arquivo != NULL){
        while (!feof(Arquivo)){
            fscanf(Arquivo,"%c", &texto);
            printf("%c", texto);
            i++;
        }
        fclose(Arquivo);
        printf("\n\n%d\n\n\n\n\n\n", i);
    }
    else
        printf("deu pau!!!!\n\n\n\n\n");

    return 0;
}
