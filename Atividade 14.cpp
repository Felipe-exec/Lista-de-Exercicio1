#include<stdio.h>
#include<stdlib.h>

main()
{
	float imc, peso, altura;
	printf("Bem vindo ao calculo de IMC.");
	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Observacao: Caso seja um numero flutuante, \ndigite seu numero com ponto, em vez de virgula, exemplo: 1.77");
	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	printf("\nDigite seu peso: ");
	scanf("%f", &peso);
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	imc = peso/(altura*altura);
	if(imc < 20)
	{
		printf("\nVoce esta abaixo do peso, com um imc de %f", imc);
	}
	if(imc >= 20 && imc < 25)
	{
		printf("\nSeu peso esta normal, com um imc de %f", imc);
	}
	if(imc >=25 && imc < 30)
	{
		printf("\nVoce esta com sobre peso, com um imc de %f", imc);
	}
	if(imc >=30 && imc < 40)
	{
		printf("\nVoce esta obeso, com um imc de %f", imc);
	}
	else
	{
		printf("\nVoce esta em uma situacao de obeso morbido, com um imc de %f", imc);
	}
}
