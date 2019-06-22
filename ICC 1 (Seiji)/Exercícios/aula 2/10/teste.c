#include <stdio.h>

int main() {
    int n1;
    int n2;
    int inversao;

    printf("\n\n  Digite dois numeros\n\n");
    scanf("%d%d", &n1, &n2);
    inversao = n2;
    n2 = n1;
    n1 = inversao;
    printf("\n\n  n1 = %d\n\n  n2 = %d\n\n\n\n\n\n", n1, n2);
}
