#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float tempo, velocidade, km, N, litros;
	printf("Vamos descobrir quantos litros de combustível você utilizou\n");
	printf("Digite em quantas horas você percorreu o percurso: ");
	scanf("%f", &tempo);
	printf("Digite a que velocidade média você estava quando percorreu o percurso(em km/h): ");
	scanf("%f", &velocidade);
	printf("Seu automóvel faz quantos KM por litro? ");
	scanf("%f", &N);
	km = tempo*velocidade;
	printf("Você percorreu %0.2f km^2", km);
	litros = km/N;
	printf("\nPortanto você gastou %0.2f Litros de gasolina.", litros);
}
