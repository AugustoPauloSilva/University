#include <stdio.h>

int main () {
    float n1;
    float n2;
    float n3;
    float n4;
    float n5;
    float media;

    printf("\n\n  Digite as notas do aluno\n\n");
    scanf("%f%f%f%f%f", &n1, &n2, &n3, &n4, &n5);
    media = n1 /5 + n2 /5 + n3 /5 + n4 /5 + n5 /5;
    printf("\n\n\nMedia desse aluno: %f\n\n\n\n\n", media);
}
