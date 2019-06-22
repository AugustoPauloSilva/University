#include <stdio.h>
#include <stdlib.h>

float P1, P2, P3, media;
int USP, i, M1, M2, M3;

le_notas(int USP){
    if(i>=5){
        printf ("\nDigite as notas do aluno %d e seus pesos (nota1, peso1; e assim por diante)\n", USP);
        scanf("%f%d%f%d%f%d", &P1, &M1, &P2, &M2, &P3, &M3);
        }
    else{
        printf ("\nDigite as notas do aluno %d\n", USP);
        scanf("%f%f%f", &P1, &P2, &P3);
        M1 = 1;
        M2 = 1;
        M3 = 1;
    }
}

calc_media(float P1, int M1, float P2, int M2, float P3, int M3){
        media = M1*P1 + M2*P2 + M3*P3;
        media = media/(M1 + M2 + M3);
}

main(){
    for (i=0; i<=9; i++){
        printf("\nDigite o N USP do aluno\n");
        scanf("%d", &USP);
        le_notas(USP);
        calc_media(P1, M1, P2, M2, P3, M3);
        printf("\nA media desse aluno vale %f\n", media);
    }
}
