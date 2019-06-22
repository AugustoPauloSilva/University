#include <stdio.h>

int main (){
    float notas[10][3], media;
    int i, j;
    i = 0;
    j = 0;
    for (i = 0;i <= 9; i++){
        printf("\n\nDigite as notas do aluno %d\n", i+1);
        for (j = 0; j <= 2; j++){
            scanf("%f", &notas[i][j]);
        }
        media = notas[i][0] + notas[i][1] + notas[i][2];
        media = media/3;
        printf ("\nA media desse aluno e %f\n", media);
    }
}
