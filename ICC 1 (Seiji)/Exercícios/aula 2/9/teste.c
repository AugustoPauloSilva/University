#include <stdio.h>

int main(){
    int h;
    int min1;
    int min2;

    printf("\n\n\n  Digite as horas na forma: \n\nhora\nminuto\n\n");
    scanf("%d%d", &h, &min1);
    min2 = 60*h + min1;
    printf("\n\n  Esse horario vale %d em minutos\n\n\n\n\n\n", min2);
}
