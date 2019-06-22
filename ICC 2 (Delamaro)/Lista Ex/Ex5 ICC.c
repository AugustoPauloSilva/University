#include <stdio.h>

int MDC (int num1, int num2)
{
    if (num1 == num2)
    {
        return num1;
    }
    else if (num1 > num2)
    {
        return MDC(num1-num2, num2);
    }
    else
    {
        return MDC(num2-num1, num1);
    }
}

int main ()
{
    int num1=16, num2=144, num3;

    num3 = MDC(num1, num2);
    printf("%d", num3);

    return 0;
}
