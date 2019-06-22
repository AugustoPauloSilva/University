#include <stdio.h>

int main (){
    int n1, n2, N, i, s;
    scanf("%d", &N);
    i = 1;
    n1 = 0;
    n2 = 1;
    printf("1; ");
    for (i = 1; i <= N; i++){
        s = n1 + n2;
        n1 = n2;
        n2 = s;
        printf("%d; ", s);
    }
    printf("\n\n\n\n\n\n\n\n");
}
