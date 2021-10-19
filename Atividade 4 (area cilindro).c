#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float raio, altura, resultado;
	printf("Calculador de área de cilindro.\n");
	printf("Digite o raio do cilindro: ");
	scanf("%f", &raio);
	printf("Digite a altura do cilindro: ");
	scanf("%f", &altura);
	resultado = 2*3.14*raio*(raio + altura);
	printf("Resultado: %0.f m^2", resultado);
}
