#include <stdio.h>


float potencia(int n, int e){
    float potencia = n;
    int i;

    if (e > 0){
        i = 1;
        while(i < e){
            potencia = potencia * n;
            i = i + 1;
        }
    }
    else{
        i = 0;
        potencia = potencia / n;
        while (i > e){
            potencia = potencia / n;
            i = i-1;
        }
    }
    return potencia;
}

float soma(float n1, float n2){
    float soma;
    soma = n1 + n2;
    return soma;
}


int main(){
    int n1, n2, e1, e2, e3, e4;
    float p1, p2, s;

    scanf("%d %d %d %d %d %d", &n1, &n2, &e1, &e2, &e3, &e4);

    //Potencia 1ª vez
    p1 = potencia(n1,e1);
    p2 = potencia(n2,e2);
    s = soma(p1,p2);

    //Potencia 2ª vez
    p1 = potencia(n1,e3);
    p2 = potencia(n2,e4);
    s = soma(s,p1);
    s = soma(s,p2);


    printf("\n\nA soma vale %.2f t = %f\n\n\n\n\n", s, t);

    return 0;
}
