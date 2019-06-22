#include <stdio.h>

int main (){
    int i, j, m, n;
    float M[3][3] = {{1,2,3},
                     {4,5,6},
                     {7,8,9}};
    m = 0;
    n = 0;


    for (i=0; i<=2; i++){
        for (j=0; j<=2; j++){
            if (M[m][n] < M[i][j]){
                m = i;
                n = j;
            }
        }
    }
    printf("%.1f e o maior numero e suas posicoes sao %d x %d\n\n\n\n\n\n\n\n\n\n\n", M[m][n], m+1, n+1);

}
