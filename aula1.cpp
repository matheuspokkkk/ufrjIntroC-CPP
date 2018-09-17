/*
Defina funcoes para:
a) somar dois numeros;
b) dividir dois numeros;
c) calcular o quadrado de um numero.

Lembrete: Qualquer uma das operacoes matematicas basicas tem
resultado inteiro caso todos os operandos sejam inteiros, e 
double caso um deles seja double.
*/

#include <stdio.h>

double soma(void);
double divisao(void);
double quadrado(void);

int main(void)
{
	char escolha;

	do
	{
		printf("voce deseja:\n"
	           "(a) somar dois numeros;\n"
	           "(b) dividir dois numeros;\n"
	           "(c) calcular o quadrado de um numero.\n\n");

		escolha = getchar();
		getchar();
	}
	while(escolha != 'a' && escolha != 'b' && escolha != 'c');

	if(escolha == 'a')
		printf("%.4lf\n", soma());
	else if(escolha == 'b')
		printf("%.4lf\n", divisao());
	else
		printf("%.4lf\n", quadrado());

	return 0;
}

double soma(void)
{
	double x, y;

	printf("insira os dois numeros:\n");

	scanf("%lf %lf", &x, &y);
	
	return x + y;
}

double divisao(void)
{
	double x, y;

	printf("insira os dois numeros:\n");

	scanf("%lf %lf", &x, &y);

	return x / y;
}

double quadrado(void)
{
	double x;

	printf("insira o numero:\n");

	scanf("%lf", &x);

	return x * x;
} 
