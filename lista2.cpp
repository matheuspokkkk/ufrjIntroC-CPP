/* 1 = Calcule o salario de um vendedor com sua respectiva bonificacao.
   O salario de um vendedor tem uma porcao fixa e uma porcentagem de bonificacao em cima do total vendido.
   Se a porcentagem de bonificacao nao for informada, sua funcao deve assumir 15%.

   2 = Receba as seguintes informacoes de dois produtos em um supermercado: codigo do produto (numero inteiro),
   quantidade do produto, e valor unitario do produto. Sua funcao deverra entao calcular o
   valor total do consumo dos dois produtos informados. Caso a quantidade de algum produto nao for
   informada, sua funcao deve assumir quantidade unitaria.

   3 = Calcule o volume e a area de superficie de um setor esferoidal, onde sera dado o raio da esfera e o
   angulo do setor cujo volume e  area devem ser calculados. Caso o angulo nao seja informado, retorne
   o volume e a area de superficie da esfera inteira. Dica: Utilize a passagem de valores por referencia
   para ”retornar” mais de um valor.

   4 = O tesseract  e o analago do cubo para a 4a dimensao geometrica. Tendo isso em mente, podemos ter
   diversos analogos para dimensoses maiores, o que chamamos de hypercubo em uma dimensao n qualquer.
   Sabendo que a area do quadrado e L^2; do volume do cubo e L^3; podemos generalizar o volume para
   qualquer dimensao n como sendo L^n. Tal regra tambem se aplica para o calculo do perimetro (tambem
   chamado de volume de superfercie para n ≥ 3), onde para o quadrado temos 4L; para o cubo 6L^2; para
   o tesseract 8L^3; etc. Faca uma funcao que dado o tamanho do lado de um hypercubo, L, e sua dimensao n ≥ 2,
   retorne o volume desse hypercubo e seu perimetro. A dimensao do hypercubo e uma entrada opcional à funcao.
   Caso nao seja declarada, assuma n = 4.
   Dica: Utilize a funcao pow da biblioteca math para realizar calculos de exponenciacao.                     */




#include <cstdio>
#include <cmath>



#define PI 3.14159



// 1:
void calculaSalario(float* salario, float bonificacao = 15.0);

// 2:
float calculaConsumo(int codigo1, int codigo2, float valor1, float valor2, int quantidade1 = 1, int quantidade2 = 1);

// 3: 
void calculaEsfera(float* volume, float* area, float raio, float angulo = 360.0);

// 4:
void calculaHyperCubo(float* areaVolume, float* perimetroVolumeDeSuperficie, float lado, float dimensao = 4.0);



int main (void)
{
	// 1:
	float salario = 0.0;
	float bonificacao = 0.0;

	scanf("%f %f", &salario, &bonificacao);

	calculaSalario(&salario, bonificacao);
	calculaSalario(&salario);

	// 2:
	int codigo1 = 0;
	int codigo2 = 0;
	int quantidade1 = 0;
	int quantidade2 = 0;

	float valor1 = 0.0;
	float valor2 = 0.0;

	scanf("%d %d %f %f %d %d", &codigo1, &codigo2, &valor1, &valor2, &quantidade1, &quantidade2);

	calculaConsumo(codigo1, codigo2, valor1, valor2, quantidade1, quantidade2);
	calculaConsumo(codigo1, codigo2, valor1, valor2);

	// 3:
	float volume = 0.0;
	float area = 0.0;
	float raio = 0.0;
	float angulo = 0.0;
	
	scanf("%f %f", &raio, &angulo);
	
	calculaEsfera(&volume, &area, raio, angulo);
	calculaEsfera(&volume, &area, raio);

	// 4:
	float areaVolume = 0.0;
	float perimetroVolumeDeSuperficie = 0.0;
	float lado = 0.0;
	float dimensao = 0.0;
	
	scanf("%f %f", &lado, &dimensao);
	
	calculaHyperCubo(&areaVolume, &perimetroVolumeDeSuperficie, lado, dimensao);
	calculaHyperCubo(&areaVolume, &perimetroVolumeDeSuperficie, lado);

	return 0;
}



// 1:
void calculaSalario(float* salario, float bonificacao)
{

	*salario = *salario + *salario * (bonificacao/100.0);

}

// 2:
float calculaConsumo(int codigo1, int codigo2, float valor1, float valor2, int quantidade1, int quantidade2)
{

	return (quantidade1 * valor1 + quantidade2 * valor2);

}

// 3:
void calculaEsfera(float* volume, float* area, float raio, float angulo)
{

	*volume = angulo/360.0 * (4.0/3.0) * PI * (raio*raio*raio);

	*area = angulo/360.0 * 4.0 * PI * (raio*raio);

}

// 4:
void calculaHyperCubo(float* areaVolume, float* perimetroVolumeDeSuperficie, float lado, float dimensao)
{
	
	*areaVolume = pow(lado, dimensao);
	
	*perimetroVolumeDeSuperficie = dimensao * 2.0 * pow(lado, dimensao - 1.0); 

}