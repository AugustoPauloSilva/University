#include <stdio.h>

int main () {
    char s;
    float a, p;

    printf("\n\n  Digite o sexo-... h ou m ...-e altura da pessoa em metros\n\n");
    scanf("%c%f", &s, &a);
    if (s == 'h'){
        p = 72.7 * a - 58;
        printf("\n\n  O peso ideal para esse individuo: %f m\n\n\n\n\n", p);
    }
    else{
        if (s == 'm'){
            p = 62.1 * a - 44.7;
            printf("\n\n  O peso ideal para esse individuo: %f m\n\n\n\n\n\n", p);
        }
        else {
        printf("\n\n  O sexo desse ser nao foi reconhecido\n\n\n\n\n");
        }
    }
}
