#include <stdio.h>

void inverter(float v[], int n){
    float temp;

    if(n-1 > 100-n){
        temp = v[100-n];
        v[100-n] = v[n-1];
        v[n-1] = temp;
        inverter(v, n-1);
    }
}

int main(){
    float v[100];
    int i;

    for(i = 0; i < 100; i++){
        v[i] = i;
    }
    inverter(v, 100);
    for(i = 0; i < 100; i++){
        printf("%-3.0f; ", v[i]);
    }

    return 0;
}
