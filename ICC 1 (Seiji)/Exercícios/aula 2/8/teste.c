#include <stdio.h>

int main (){
    float n1;
    float n2;
    float n3;
    int p1;
    int p2;
    int p3;
    float sn;
    int sp;
    float media;


    printf("\n\n\n  Digite as tres notas do aluno\n\n");
    scanf("%f%f%f", &n1, &n2, &n3);
    printf("\n\n\n  Agora digite os pesos da nota  %f  %f  %f  respectivamente", n1, n2, n3);
    scanf("%d%d%d", &p1, &p2, &p3);
    sn = n1*p1 + n2*p2 + n3*p3;
    sp = p1 + p2 + p3;
    media = sn/sp;
    printf("\n\n\n  A media vale %f\n\n\n\n\n\n", media);
}
