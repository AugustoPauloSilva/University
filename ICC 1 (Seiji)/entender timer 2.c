#include<stdio.h>
#include<time.h>

int main(){
    float tempo=0, t, t2=0, i;
    char k;



inicio:


    i = 0.0;
    scanf("%f", &t);
    printf("inicio\n");
    t2 = (float)clock()/(float)CLOCKS_PER_SEC;
        while (tempo-t2 < t){
            tempo = (float)clock()/(float)CLOCKS_PER_SEC;
                if(tempo - t2 - i < 0.05 && tempo - t2 - i > -0.05){
                    if(i != 0){
                        printf("\n\n%.1f segundo(s)", i);
                    }
                    i = i+1;
                }
        }

    scanf("%c", &k);
    if (k == 's'){
        goto inicio;
    }
    printf("\n\n\nfim\n\n\n\n\n\n\n\n\n\n");
}
