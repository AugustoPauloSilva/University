#include <stdio.h>

int repeticoes_algarismo (int num, int K)
{
    if (K != 0 && num == K)
    {
        return 1;
    }
    else if (num == 0)
    {
        return 0;
    }
    else if (num%10 == K)
    {
        return 1 + repeticoes_algarismo(num/10, K);
    }
    else
    {
        return repeticoes_algarismo(num/10, K);
    }
}

int main ()
{
    int num=242065030, K=0, qtd;

    qtd = repeticoes_algarismo(num, K);

    printf("%d", qtd);
    return 0;
}
