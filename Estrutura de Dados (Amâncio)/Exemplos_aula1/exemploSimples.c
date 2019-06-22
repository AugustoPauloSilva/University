#include <stdlib.h>
#include <stdio.h>

typedef struct {
	char* nome;
	char* endereco;
} Contato;

void Imprime(Contato c){

	printf("Nome Contato: %s\n",c.nome);
	printf("Endereco: %s\n",c.endereco);
}

int main (void){

	Contato Agenda[10];

	/*Substituir essas duas linhas pela operacao insere-na-agenda (uma das que serao criadas no exercicio)
	* Obs.: O acesso (como feito nas duas linhas abaixo) nao deve ser feito fora das TADS (como explicado em aula). Foi feito assim
	* apenas para o exemplo de aula ficar mais simples, e deve ser substituido por suas funcoes criadas */
	Agenda[0].nome = "Vanessa";
	Agenda[0].endereco = "Uberlandia";

	Imprime(Agenda[0]);

	return 0;
}
