#include <stdio.h>

int main () {
    char palavra[100], atual, substituto, r;
    int i;

while(r != 'n'){
    i = 0;

    scanf("%[^\n]%*c %c%*c %c%*c", &palavra, &atual, &substituto);
    printf("\n%s", palavra);

    while (palavra[i] != '\0'){
        if (palavra[i] == atual){
            palavra[i] = substituto;
        }
        i = i+1;
    }
    printf("\n%s\n\n", palavra);
    printf("Quer fazer de novo?  -s(sim) n(nao)-\n");

    scanf("%c%*c", &r);
    printf("\n\n\n");
}
    return 0;
}
