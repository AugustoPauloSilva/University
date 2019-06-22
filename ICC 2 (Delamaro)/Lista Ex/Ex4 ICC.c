#include <stdio.h>

void binario (int num)
{
    if (num == 0)
    {
        printf("0");
    }
    else if (num == 1)
    {
        printf("1");
    }
    else if (num % 2 == 0)
    {
        binario(num/2);
        printf("0");
    }
    else
    {
        binario(num/2);
        printf("1");
    }
}

int main ()
{
    int num = 4;
    int aux;

    binario(num);

    return 0;
}
