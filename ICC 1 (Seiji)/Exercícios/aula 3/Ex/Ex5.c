#include <stdio.h>

int main(){
    float salario, tempo;
    printf("\n\nDigite o salario e tempo de servico na empresa em anos de um funcionario\n");
    scanf("%f%f", &salario, &tempo);
    if (salario > 0){
        if (salario <= 500){
        salario = salario * 1.25;
        }
        else{
            if (salario <= 1000){
            salario = salario * 1.2;
            }
            else{
                if (salario <= 1500){
                salario = salario * 1.15;
                }
                else{
                    printf ("Este nao e um salario fornecido por essa empresa atualmente");
                }
            }
        }
    }
    if (tempo > 0 && salario > 0){
        if (tempo > 1){
            if (tempo <= 3){
                salario = salario + 100;
            }
            else {
                if (tempo <= 6){
                salario = salario + 200;
                }
                else{
                printf ("\n\nO tempo de servico foi digitado incorretamente\n\n\n\n\n\n\n\n\n");
                }
            }
        }
        printf ("\n\nO novo salario vale %f reais", salario);
    }
    else {
        printf ("\n\nO tempo de servico ou salario foi digitado incorretamente\n\n\n\n\n\n\n\n");
    }
}
