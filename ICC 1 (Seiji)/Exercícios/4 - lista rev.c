#include <stdio.h>

int somar(int n){
    int * v;
    int i, s = 0;

    v = (int*)calloc(n, sizeof(int));
    for (i = 0; i < n; i++){
        v[i] = i;
    }
    for (i = 0; i < n; i++){
        s = s + v[i];
    }
    return s;
}


int main (){
    int n, s;

    scanf ("%d", &n);
    s = somar(n);
    printf("\nA soma vale: %d\n\n\n\n\n\n\n\n", s);

    return 0;
}
