#include "Conjunto.h"

int main ()
{
    int i, e=1;
    conjunto C_principal, C_principal_2, C_principal_3;

    Criar_Conjunto(&C_principal);
    Criar_Conjunto(&C_principal_2);
    Criar_Conjunto(&C_principal_3);

    while (e != 0)
    {
        printf("\n====CONJUNTOS====\n");
        printf("[1] Inserir Valor\n[2] Remover Valor \n[3] Verificar Valor\n[4] Minimo Conjunto\n[5] Maximo Conjunto\n[6] Copiar\n[7] Comparar\n[8] Uniao\n[9] Interseccao\n[10] Imprimir\n[11] Diferenca\n[0] Sair\n");
        scanf("%d", &e);

        if (e == 1)
        {
            printf("Com qual conjunto vc quer mexer?\n[1] ou [2]?\n");
            scanf("%d", &e);
            if (e == 1)
            {
                Inserir_valor(&C_principal);
                printf("\nConjunto 1\n");
                for (i=0; i<100; i++)
                {
                    if (C_principal.vetor[i] == 1)
                    {
                        printf(" %d ", i);
                    }
                }
                printf("\n");
            }
            else if (e == 2)
            {
                Inserir_valor(&C_principal_2);
                printf("\nConjunto 2\n");
                for (i=0; i<100; i++)
                {
                    if (C_principal_2.vetor[i] == 1)
                    {
                        printf(" %d ", i);
                    }
                }
                printf("\n");
            }
        }
        else if (e == 2)
        {
            printf("\nCom qual conjunto vc quer mexer?\n[1] ou [2]?\n");
            scanf("%d", &e);
            if (e == 1)
            {
                Remover_valor(&C_principal);
                printf("\nConjunto 1\n");
                for (i=0; i<100; i++)
                {
                    if (C_principal.vetor[i] == 1)
                    {
                        printf(" %d ", i);
                    }
                }
                printf("\n");
            }
            else if (e == 2)
            {
                Remover_valor(&C_principal_2);
                printf("\nConjunto 2\n");
                for (i=0; i<100; i++)
                {
                    if (C_principal_2.vetor[i] == 1)
                    {
                        printf(" %d ", i);
                    }
                }
                printf("\n");
            }
        }
        else if (e == 3)
        {
            printf("\nCom qual conjunto vc quer mexer?\n[1] ou [2]?\n");
            scanf("%d", &e);
            if (e == 1)
            {
                Membro(&C_principal);
            }
            else if (e == 2)
            {
                Membro(&C_principal_2);
            }
        }
        else if (e == 4)
        {
            printf("\nCom qual conjunto vc quer mexer?\n[1] ou [2]?\n");
            scanf("%d", &e);
            if (e == 1)
            {
                Min(&C_principal);
            }
            else if (e == 2)
            {
                Min(&C_principal_2);
            }
        }
        else if (e == 5)
        {
            printf("\nCom qual conjunto vc quer mexer?\n[1] ou [2]?\n");
            scanf("%d", &e);
            if (e == 1)
            {
                Max(&C_principal);
            }
            else if (e == 2)
            {
                Max(&C_principal_2);
            }
        }
        else if (e == 6)
        {
            printf("\nQual conjunto vc quer copiar?\n[1] ou [2]?\n");
            scanf("%d", &e);
            if (e == 1)
            {
                Atribuir(&C_principal_2, &C_principal);
            }
            else if (e == 2)
            {
                Atribuir(&C_principal_2, &C_principal);
            }
        }
        else if (e == 7)
        {
            Igual(&C_principal, &C_principal_2);
        }
        else if (e == 8)
        {
            Uniao(&C_principal, &C_principal_2, &C_principal_3);
        }
        else if (e == 9)
        {
            Interseccao(&C_principal, &C_principal_2, &C_principal_3);
        }
        else if (e == 10)
        {
            printf("\n Qual conjunto quer imprimir?\n[1], [2] ou [3] (os dois conjuntos)?\n");
            scanf("%d", &e);

            if( e == 1) imprimir(&C_principal);
            else if( e == 2) imprimir(&C_principal_2);
            else if( e == 3){
                printf("\nConjunto 1");
                imprimir(&C_principal);
                printf("\n\n\nConjunto 2");
                imprimir(&C_principal_2);
                printf("\n\n");
            }
        }
        else if (e == 11)
        {
            printf("\nQual subtracao deseja fazer?\n[1]=>1-2 ou [2]=>2-1?\n");
            scanf("%d", &e);
            if (e == 1)
            {
                Diferenca(&C_principal, &C_principal_2, &C_principal_3);
            }
            else if (e == 2)
            {
                Diferenca(&C_principal_2, &C_principal, &C_principal_3);
            }
        }
    }
    free(C_principal.vetor);
    free(C_principal_2.vetor);
    free(C_principal_3.vetor);

    printf("\n\n\n\n\n\n");
    return 0;
}
