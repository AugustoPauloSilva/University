#include <stdio.h>

float prop_aurea (int n){
    if (n == 0){
        return 2;
    }
    else if (n > 0){
        return 1 + 1/(prop_aurea(n-1));
    }
    else{
        return -1;
    }
}

int main (){
    int n;
    float p;

    scanf("%d", &n);
    p = prop_aurea(n);
    if (p != -1){
        printf("\nA proporcao vale %f\n\n\n\n\n\n\n", p);
    }
    else{
        printf("\nErro\n\n\n\n\n\n\n");
    }
    return 0;
}
