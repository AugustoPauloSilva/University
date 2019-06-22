#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

// Solucoes da segunda provinha de ICC I (SSC0600)
// Por Adriano Belfort e Henrique Silveira

#define MAX 100
#define Q5MAX 15

void questao1()
{
	int matriz[MAX][MAX], n, m;	// Suponha que m e n ja existem e
	// que a matriz j� foi alocada
	printf("Digite n: ");
	scanf("%d", &n);
	printf("Digite m: ");
	scanf("%d", &m);
	int i, j;

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if ((i == j) || (i + j == m - 1)) {
				matriz[i][j] = 1;
			}
			else {
				matriz[i][j] = 0;
			}
		}
	}

	for (i = 0; i < n; i++) {
		printf("\n");
		for (j = 0; j < m; j++) {
			printf("%d ", matriz[i][j]);
		}
	}
	printf("\n\n");
}

// Questao 2
// Item a
int fibonacciRecursiva(int n)
{
	if (n == 0 || n == 1)
	{
		return n;
	}
	else
	{
		return fibonacciRecursiva(n - 1) + fibonacciRecursiva(n - 2);
	}
}

// Item b
int fibonacciIterativa(int n)
{
	int resultado, primeiroAnterior, segundoAnterior, i;

	if (n == 0 || n == 1)
	{
		return n;
	}
	else
	{
		resultado = 0;
		primeiroAnterior = 1;
		segundoAnterior = 0;

		for (i = 2; i <= n; i++)
		{
			resultado = primeiroAnterior + segundoAnterior;
			segundoAnterior = primeiroAnterior;
			primeiroAnterior = resultado;
		}

		return resultado;
	}
}

// Questao 3
// Item a
int fatRecursivo(int n) {
	if (n == 0 || n == 1)
		return 1;

	return n * fatRecursivo(n - 1);
}

// Item b
int fatIterativo(int n) {
	int fat = 1, i;

	for (i = 1; i <= n; i++) {
		fat = fat * i;
	}

	return fat;
}

// Questao 4
int mdc(int x, int y)
{
	if (y == 0)
	{
		return x;
	}
	else
	{
		return mdc(y, x % y);
	}
}

// Questao 5

// Argumentos: o vetor (vet), o tamanho do vetor (N), o minimo
// encontrado ate entao (min) e a posicao atual (posAtual).
int menorValor(int vet[], int N, int min, int posAtual) {
	// Caso base: passamos do ultimo elemento do vetor.
	// O minimo valor foi encontrado e esta armazenado em min.
	if (posAtual == N)
		return min;

	// Quando nao estamos no caso base, temos de comparar o elemento
	// do vetor na posicao atual com o minimo encontrado ate agora.
	// O min eh atualizado se vet[posAtual] eh menor que o minimo
	// ate entao.
	if (vet[posAtual] < min)
		min = vet[posAtual];

	// Chama recursivamente a funcao, para percorrer o vetor
	// e analisar para cada elemento no vetor se tal elemento
	// eh menor que o minimo em um dado momento.
	return menorValor(vet, N, min, posAtual + 1);
}

// Questao 6
void inverteRecursivo(int *vetor, int inicio, int fim)
{
	int aux;

	if (inicio > fim) return;

	aux = vetor[inicio];
	vetor[inicio] = vetor[fim];
	vetor[fim] = aux;

	return inverteRecursivo(vetor, inicio + 1, fim - 1);
}

void inverte(int *vetor)
{
	return inverteRecursivo(vetor, 0, MAX - 1);
}

void imprimeRecursivo(int vetor[], int tamanho)
{
	if (tamanho - 1 < 0)
	{
		printf("\n");
		return;
	}

	imprimeRecursivo(vetor, tamanho - 1);

	printf("%d ", vetor[tamanho - 1]);
}

// Questao 7
void minuscula(char string[]) {
	int i;
	for (i = 0; string[i] != '\0'; i++) {
		if (string[i] < 'a')
			string[i] = string[i] + 'a' - 'A';
	}
}

int checaPalindromo(char string[]) {
	int i;

	// Conta o tamanho da string - alternativa: strlen() da string.h
	for (i = 0; string[i] != '\0'; i++);

	int tamanho = i;

	for (i = 0; i < tamanho / 2; i++)
		if (string[i] != string[tamanho - 1 - i])
			return 0;

	return 1;
}

// Questao 8
int contaDigitos(int n, int d)
{
	int contador;

	contador = 0;

	while (n != 0)
	{
		if (n % 10 == d)
		{
			contador++;
		}
		n /= 10;			// A mesma coisa que n = n / 10;
	}

	return contador;
}

// Questao 8 (solucao alternativa)
int contaDigitos2(int n, int d)
{
	char numeroComoString[20];
	int i, digitos, contador;

	digitos = sprintf(numeroComoString, "%d", n);

	for (i = 0, contador = 0; i < digitos; i++)
	{
		if ((int)(numeroComoString[i] - '0') == d)
		{
			contador++;
		}
	}

	return contador;
}

char ehPermutacao(int a, int b)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (contaDigitos(a, i) != contaDigitos(b, i))
		{
			return 0;
		}
	}

	return 1;
}

// Questao 9
void questao9()
{
	int matriz[MAX][MAX], i, j, estrada, n, k;

	printf("\nDigite o valor de n: ");
	scanf("%d", &n);
	while (n <= 0 || n > MAX) {
		printf("\nOpcao invalida! Digite n entre 1 e 100: ");
		scanf("%d", &n);
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i == j)
				matriz[i][j] = 1;
			else {
				printf("\nExiste alguma estrada que sai da cidade %d e\n", i);
				printf("chega na cidade %d? Digite 1 se sim ou 0 se n�o. Opcao: ", j);
				scanf("%d", &estrada);
				while (estrada != 0 && estrada != 1) {
					printf("\nOpcao invalida! Digite ou 0 ou 1: ");
					scanf("%d", &estrada);
				}
				matriz[i][j] = estrada;
			}
		}
	}

	/***************************** PARTE 1 *********************************/
	printf("\nPARTE 1: quantas estradas chegam e quantas saem da cidade k.");
	printf("\nDigite o valor de k: ");
	scanf("%d", &k);
	while (k < 0 || k > n - 1) {
		printf("\nValor invalido! Digite k ente 0 e %d: ", n - 1);
		scanf("%d", &k);
	}

	int chegamK = 0, saemK = 0;
	for (i = 0; i < n; i++) {
		if (matriz[k][i] == 1)
			saemK++;
		if (matriz[i][k] == 1)
			chegamK++;
	}

	printf("\nO numero de estradas que SAEM da cidade %d eh: %d", k, saemK);
	printf("\nO numero de estradas que CHEGAM a cidade %d eh: %d", k, chegamK);

	/***********************************************************************/

	/***************************** PARTE 2 *********************************/
	printf("\n\nPARTE 2: A qual cidade chega o maior numero de estradas?");

	int cidade = 0, numEstradasChegam, maiorNumEstradasChegam = 0;
	for (i = 0; i < n; i++) {
		numEstradasChegam = 0;
		for (j = 0; j < n; j++) {
			if (matriz[j][i] == 1)
				numEstradasChegam++;
		}
		if (numEstradasChegam > maiorNumEstradasChegam)
			cidade = i;
	}

	printf("\nA cidade %d eh a cidade a qual chega o maior numero de estradas", k);

	/***********************************************************************/

	/***************************** PARTE 3 *********************************/
	printf("\n\nPARTE 3: Cidades isoladas, sem saida e sem entrada");

	int numEstradasSaem;

	for (i = 0; i < n; i++) {
		numEstradasChegam = 0;
		numEstradasSaem = 0;
		for (j = 0; j < n; j++) {
			if (matriz[i][j] == 1 && i != j)
				numEstradasSaem++;
			if (matriz[j][i] == 1 && i != j)
				numEstradasChegam++;
		}
		if (numEstradasChegam == 0 && numEstradasSaem == 0)
			printf("\nA cidade %d eh isolada", i);
		else if (numEstradasSaem == 0)
			printf("\nA cidade %d nao tem saida", i);
		else if (numEstradasChegam == 0)
			printf("\nA cidade %d nao tem entrada", i);
	}
	printf("\n\n");
}

void esperaTecla();
void limpaTela();
void esperaeLimpa();
void instrucoes(int argc, char* argv[]);

int main(int argc, char* argv[])
{
	char execucao[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int j;

	printf("Solucoes da segunda provinha de Introducao a Ciencia da Computacao I\n\n");
	printf("Serao executadas a seguir as solucoes das questoes presentes na provinha.\n");
	printf("Compare o que voce fez com as solucoes finais. Quanto maior a semelhanca, maior ");
	printf("a chance de que voce acertou. Mas nao se preocupe se as suas solucoes estiverem ");
	printf("diferentes: em computacao existem muitas maneiras de se resolver um problema!\n\n");

	if (argc == 1)
	{
		instrucoes(argc, argv);

		for (j = 0; j < 9; j++)
		{
			execucao[j] = 1;
		}
	}
	else
	{
		printf("Questoes selecionadas: ");
		for (j = 1; j < argc; j++)
		{
			execucao[atoi(argv[j]) - 1] = 1;
			printf("%d ", atoi(argv[j]));
		}
		printf("\n\n");
	}

	esperaeLimpa();

	int x, y, i, v[MAX], n;

	/**************************************************************************/
	/***************************** QUESTAO 1 **********************************/
	/**************************************************************************/
	if (execucao[0])
	{
		printf("Questao 1: Matriz com diagonal preenchida\n\n");
		questao1();

		esperaeLimpa();
	}
	/**************************************************************************/
	/***************************** QUESTAO 2 **********************************/
	/**************************************************************************/
	int termoFibonacci, resposta;

	if (execucao[1])
	{
		printf("Questao 2: Fibonacci\n\n");
		printf("Insira a ordem do termo que voce deseja encontrar: ");
		scanf("%d", &termoFibonacci);

		resposta = fibonacciRecursiva(termoFibonacci);
		printf("Usando a funcao recursiva, o %d-esimo termo da sequencia de Fibonacci eh: %d\n", termoFibonacci, resposta);

		resposta = fibonacciIterativa(termoFibonacci);
		printf("Usando a funcao iterativa, o %d-esimo termo da sequencia de Fibonacci eh: %d\n\n", termoFibonacci, resposta);

		esperaeLimpa();
	}

	/**************************************************************************/
	/***************************** QUESTAO 3 **********************************/
	/**************************************************************************/

	if (execucao[2])
	{
		printf("Questao 3: Fatorial\n\n");
		printf("Voce quer calcular fatorial de qual numero?\nNumero: ");
		scanf("%d", &n);
		// Supondo que o usuario so digitara numeros maiores ou iguais a 0
		// Opcional:
		while (n < 0) {
			printf("Digite numeros maiores ou iguais a 0!\nNumero: ");
			scanf("%d", &n);
		}

		printf("O valor do fatorial (recursivo) eh: %d\n", fatRecursivo(n));
		printf("O valor do fatorial (iterativo) eh: %d\n", fatIterativo(n));
		printf("\n");

		esperaeLimpa();
	}
	/**************************************************************************/
	/***************************** QUESTAO 4 **********************************/
	/**************************************************************************/

	if (execucao[3])
	{
		printf("Questao 4: MDC\n\n");
		printf("Insira o primeiro numero: ");
		scanf("%d", &x);
		printf("Insira o segundo numero: ");
		scanf("%d", &y);
		printf("\n");

		resposta = mdc(x, y);

		printf("O mdc entre %d e %d eh %d\n\n", x, y, resposta);

		esperaeLimpa();
	}

	/**************************************************************************/
	/***************************** QUESTAO 5 **********************************/
	/**************************************************************************/

	if (execucao[4])
	{
		printf("Questao 5: Menor valor de um vetor\n\n");

		int vetor[Q5MAX] = { -6, 4, 67, 90, -87, -4, 567, -22, 67, 321, 55, -6555, 60, 54, -765 };

		for (i = 0; i < Q5MAX; i++)
		{
			printf("%d ", vetor[i]);
		}
		printf("\n\n");

		printf("O menor valor encontrado utilizando a funcao recursiva foi:");

		// Chamada inicial da funcao eh feita passando o vetor e o tamanho do
		// vetor como argumentos, alem do elemento na primeira posicao do vetor
		// (vet[0]) e a posicao desse primeiro elemento (0). Esses ultimos dois
		// parametros correspondem ao minimo elemento conhecido inicialmente,
		// que eh justamente o primeiro elemento.
		printf("\nMENOR VALOR: %d\n\n", menorValor(vetor, Q5MAX, vetor[0], 0));

		esperaeLimpa();
	}

	/**************************************************************************/
	/***************************** QUESTAO 6 **********************************/
	/**************************************************************************/

	if (execucao[5])
	{
		printf("Questao 6: Inversao de um vetor\n\n");
		printf("Ler %d valores leva muito tempo. Vamos gerar um vetor aleatorio:\n", MAX);

		srand(time(NULL));

		// Gera 100 valores aleatorios entre 0 e 99, um para cada posicao do vetor
		for (i = 0; i < MAX; i++)
		{
			v[i] = rand() % MAX;
		}

		printf("Vetor:\n");
		imprimeRecursivo(v, MAX);

		printf("\n\n");
		esperaTecla();

		inverte(v);

		printf("Vetor invertido:\n");
		imprimeRecursivo(v, MAX);
		printf("\n\n");

		/*
		// Alternativa iterativa para a impressao do vetor
		// Esta versao quebra a linha a cada dez valores

		for (i = 0; i < MAX; i++)
		{
		printf("%2d", v[i]);

		if ((i + 1) % 10 == 0 && i != 0)
		{
		printf("\n");
		}
		else
		{
		printf(" ");
		}
		}
		printf("\n\n");
		*/

		esperaeLimpa();
	}

	/**************************************************************************/
	/***************************** QUESTAO 7 **********************************/
	/**************************************************************************/

	if (execucao[6])
	{
		printf("Questao 7: Palindromos\n\n");
		// Consideramos aqui que as palavras n�o apresentaram espa�os, v�rgulas,
		// pontos nem nenhum outro caractere especial.

		char string[MAX];
		printf("Digite uma palavra para checar se ela eh um palindromo:\n-> ");
		scanf("%s", string);
		minuscula(string);
		int palindromo = checaPalindromo(string);
		if (palindromo)
			printf("\nA palavra \"%s\" eh palindromo!\n\n", string);
		else
			printf("\nA palavra \"%s\" NAO eh palindromo.\n\n", string);

		esperaeLimpa();
	}
	/**************************************************************************/
	/***************************** QUESTAO 8 **********************************/
	/**************************************************************************/

	if (execucao[7])
	{
		printf("Questao 8: Permutacao\n\n");
		printf("Insira o primeiro numero: ");
		scanf("%d", &x);
		printf("Insira o segundo numero: ");
		scanf("%d", &y);

		if (ehPermutacao(x, y))
		{
			printf("\n%d eh permutacao de %d\n\n", x, y);
		}
		else
		{
			printf("\n%d nao eh permutacao de %d\n\n", x, y);
		}

		esperaeLimpa();
	}

	/**************************************************************************/
	/***************************** QUESTAO 9 **********************************/
	/**************************************************************************/

	if (execucao[8])
	{
		printf("Questao 9 [EXTRA]: Estradas entre cidades\n");
		questao9();
	}

	return 0;
}

void esperaTecla()
{
	fflush(stdin);
#ifdef _WIN32
	system("pause");
#elif _WIN64
	system("pause");
#else
	printf("Digite qualquer letra e ENTER para continuar...");
	scanf("%*s");
#endif
	fflush(stdin);
	printf("\n\n");
}

void limpaTela()
{
	#ifdef __linux__
		system("clear");
	#endif

	#ifdef _WIN32
		system("cls");
	#endif

	#ifdef _WIN64
		system("cls");
	#endif

	#ifdef __APPLE__
		system("clear");
	#endif
}

void esperaeLimpa()
{
	esperaTecla();
	limpaTela();
}

void instrucoes(int argc, char* argv[])
{
	printf("Se voce quiser, veja no seu ");

	#ifdef __linux__
		printf("Linux ");
	#endif

	#ifdef _WIN32
		printf("Windows ");
	#endif

	#ifdef _WIN64
		printf("Windows ");
	#endif

	#ifdef __APPLE__
		printf("Mac ");
	#endif

		printf("apenas as questoes que deseja da seguinte maneira:\n\n");

	#ifdef __linux__
		printf("\tPressione Ctrl+Alt+T para abrir o Terminal e navegue ate a pasta onde esta o executavel deste programa.\n");
		printf("\tDigite: %s seguido dos numeros das questoes que voce deseja rodar.\n\tPor exemplo:\n", argv[0]);
		printf("\t%s 1 5 8\n\n", argv[0]);
	#endif

	#ifdef _WIN32
		printf("\tPressione Windows+R e digite cmd, apertando Enter ao final.\n");
		printf("\tDigite: %s seguido dos numeros das questoes que voce deseja rodar. \n\tPor exemplo:\n", argv[0]);
		printf("\t%s 1 5 8\n\n", argv[0]);
	#endif

	#ifdef _WIN64
		printf("\tPressione Windows+R e digite cmd, apertando Enter ao final.\n");
		printf("\tDigite: %s seguido dos numeros das questoes que voce deseja rodar. \n\tPor exemplo:\n", argv[0]);
		printf("\t%s 1 5 8\n\n", argv[0]);
	#endif

	#ifdef __APPLE__
		printf("\tIdentifique a lupa no canto superior direito da tela e clique nela.\n");
		printf("\tDigite: Terminal e clique no primeiro resultado.\n");
		printf("\tNavegue ate a pasta onde esta o executavel deste programa.\n");
		printf("\tDigite: %s seguido dos numeros das questoes que voce deseja rodar.\n\tPor exemplo:\n", argv[0]);
		printf("\t%s 1 5 8\n\n", argv[0]);
	#endif
}
