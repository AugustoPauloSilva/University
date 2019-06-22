#include <stdio.h>

int main (){
    float s1, s2;
    int a;
    a = 0;
    s1 = 5000;
    s2 = 2500;
    while ( s1 >= s2){
        s1 = s1 * 1.1;
        s2 = s2 * 1.2;
        a = a + 1;
        }
    printf ("\n\n  O salario de seu colega sera maior em %d anos\n\n\n\n\n\n\n\n\n\n\n", a);
}
