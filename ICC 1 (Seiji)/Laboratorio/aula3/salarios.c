#include <stdio.h>

int main () {
    int i;
    float s1, s2;
    s1 = 5000;
    s2 = 2500;
    i = 1;
    for ( i = 1; i <= 5; i = i++){
        s1 = 1.1 * s1;
        s2 = 1.1 * s2;
    }
    printf ("\n\n  O seu salario vale %f reais e o de seu colega %f reais\n\n\n\n\n\n\n\n", s1, s2);
}
