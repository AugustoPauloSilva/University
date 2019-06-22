#include<stdio.h>
#include<time.h>

int main(){
    float tempo=0, t, i, t2=0;


    scanf("%f", &t);
    t2 = (float)clock()/(float)CLOCKS_PER_SEC;
    i = 0.0;
    printf("inicio\n");
        while (tempo - t2 < t){
            tempo = (float)clock()/(float)CLOCKS_PER_SEC;
                if(tempo - t2 - i < 0.05 && tempo - t2 - i > -0.05){
                    if(i != 0){
                        printf("\n\n%.1f segundo(s)", i);
                    }
                    i = i+1;
                }
        }
    printf("\n\n\nfim\n\n\n\n\n\n\n\n\n\n");
}
