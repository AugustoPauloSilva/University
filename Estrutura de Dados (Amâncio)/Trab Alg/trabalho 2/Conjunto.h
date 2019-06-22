#include <stdio.h>
#include <stdlib.h>

typedef struct conjunto
{
    int* vetor;
}conjunto;

int Criar_Conjunto(conjunto* Conjunto);
void Inserir_valor(conjunto* Conjunto);
void Remover_valor(conjunto* Conjunto);
void Membro(conjunto* Conjunto);
void Min (conjunto* Conjunto);
void Max (conjunto* Conjunto);
void Atribuir (conjunto* Conjunto1, conjunto* Conjunto2);
void Igual (conjunto* Conjunto1, conjunto* Conjunto2);
void imprimir(conjunto* Conjunto);
void Uniao (conjunto* Conjunto1, conjunto* Conjunto2, conjunto* Conjunto3);
void Interseccao (conjunto* Conjunto1, conjunto* Conjunto2, conjunto* Conjunto3);
void Diferenca (conjunto* Conjunto1, conjunto* Conjunto2, conjunto* Conjunto3);
