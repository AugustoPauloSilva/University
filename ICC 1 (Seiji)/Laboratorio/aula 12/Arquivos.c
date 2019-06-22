#include <stdio.h>

int main () {
    FILE*Arquivo;
    char texto;

    Arquivo = fopen("dados1.txt","w");
    if (Arquivo != NULL){
        fprintf(Arquivo,"Uia to escrevendo um arquivo huahuahuahuahua\n");
        //while (!feof(Arquivo)){
            //fscanf(Arquivo,"%c", &texto);
            //printf("%c", texto);
        //}
        fclose(Arquivo);
    }
    else
        printf("deu pau!!!!\n\n\n\n\n");

    return 0;
}
