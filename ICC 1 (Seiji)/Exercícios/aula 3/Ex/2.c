#include <stdio.h>

int main() {
    int t1;
    int t2;
    char u;

    printf("\n\n  Escreva a temperatura e a unidade utilizada na medicao - Ceulsius ou Fahrenheits-\n\n  Ex: temperatura c ou temperatura f\n\n");
    scanf("%d%c, &t1, &u");
    if (u = 99) {
        t2 = 1.8*t1 + 32;
        printf("\n\n  A temperatura vale %d graus Fahrenheits", t2);
    }
    else {
        if (u = 102) {
            t2 = (t1 - 32)/ 1.8;
            printf("\n\n  A temperatura vale %d graus Celsius", t2);
        }
        else {
            printf("\n\n  A unidade inserida nao foi reconhecida");
        }
    }
}
