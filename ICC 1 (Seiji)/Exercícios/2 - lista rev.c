#include <stdio.h>
#ifdef __unix__
# include <unistd.h>
#elif defined _WIN32
# include <windows.h>
#define sleep(x) Sleep(1000 * x)
#endif

void imprime(int i);

void imprime(int i){
    int j = 1;
    if (i <= 10){
        sleep(j);
        printf("%d; ", i);
        i++;
        imprime(i);
    }

}

int main() {

    imprime(1);
    printf("\n\n\n\n\n\n");

    return 0;
}
