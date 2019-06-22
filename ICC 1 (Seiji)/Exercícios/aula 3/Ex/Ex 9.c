#include <stdio.h>

int main (){
    float x, y, z, s1, s2 , s3;
    scanf("%f%f%f", &x, &y, &z);
    s1 = x + y;
    s2 = y + z;
    s3 = z + x;
    if (s1 > z && s2 > x && s3 > y){
        if (x == y && x == z){
            printf("O triangulo existe e e equilatero");
        }
        else{
            if (x != y && x!= z && y != z){
                printf("O triangulo existe e e escaleno");
            }
            else {
                printf("O triangulo existe e e isosceles");
            }
        }
    }
}
