#include <stdio.h>

int main () {
    char nome [10];
    char inicial;

    printf("Digite um nome");
    gets(nome);
    inicial = nome[0];
    printf("   Seu nome: %s\n   A inicial: %c", nome, inicial);}
