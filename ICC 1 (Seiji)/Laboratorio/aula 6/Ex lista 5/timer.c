#include <stdio.h>
#include <time.h>


float timer(float t){
    int i=1;
    float t2, ti;

    ti = (float)clock()/(float)CLOCKS_PER_SEC;
    t2 = ti;

    while(t2 - ti < t){
        t2 = (float)clock()/(float)CLOCKS_PER_SEC;
        if (t2 - ti > i-0.01 && t2 - ti < i + 0.01){
            printf("faltam %.2f segundos\n", t-i);
            i = i + 1;
        }
    }
    fflush(stdin);
    return 0;
}

int main(){
    float t;

    scanf("%f", &t);
    fflush(stdin);

    timer(t);


    printf("\n\n\n\n\n\n\n");
    return 0;
}
