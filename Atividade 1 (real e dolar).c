#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int real;
	float dolar;
	printf("Conversor de Real em D�lar.\n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Apresente o valor em real: R$ ");
	scanf("%i", &real);
	dolar = real*5.33;
	printf("\nHoje, dia 20 de setembro de 2021, �s 22:17, o d�lar americano est� valendo 5,33 reais.");
	printf("\nportanto.");
	sleep(1);
	printf(".");
	sleep(2);
	printf(".");
	sleep(1);
	printf("O valor de R$%i s�o, em d�lar, US$%0.2f", real, dolar);
}
