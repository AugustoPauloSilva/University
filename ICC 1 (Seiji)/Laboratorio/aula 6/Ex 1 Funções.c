#include <stdio.h>
#include <stdlib.h>

char Nome[30];
int Idade;

le_nome(){
    printf ("\nDigite um nome\n");
    scanf ("%s", &Nome);
}

le_idade(){
    printf ("\nDigite a idade\n");
    scanf("%d", &Idade);
}

exibe_dados(){
    printf("\n%s tem %d anos\n", Nome, Idade);
}

main(){
    char resp[3];
    resp[0]='s';
    while (resp[0] == 's'){
        le_nome();
        le_idade();
        exibe_dados();
        printf("\nQuer fazer de novo?\n");
        scanf("%s", &resp);
        printf("\n\n\n");
    }
    return 0;
}
