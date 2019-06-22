#include <stdio.h>
#include <time.h>


float timer(float t){
    int i=1;
    const time_t ti;
    const time_t t2;
    float d;

    time_t time(time_t* ti);

    d = double difftime(time_t* ti,time_t* t2)

    while(d < t){
        time(t2);
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
