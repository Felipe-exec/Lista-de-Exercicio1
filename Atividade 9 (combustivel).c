#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float tempo, velocidade, km, N, litros;
	printf("Vamos descobrir quantos litros de combust�vel voc� utilizou\n");
	printf("Digite em quantas horas voc� percorreu o percurso: ");
	scanf("%f", &tempo);
	printf("Digite a que velocidade m�dia voc� estava quando percorreu o percurso(em km/h): ");
	scanf("%f", &velocidade);
	printf("Seu autom�vel faz quantos KM por litro? ");
	scanf("%f", &N);
	km = tempo*velocidade;
	printf("Voc� percorreu %0.2f km^2", km);
	litros = km/N;
	printf("\nPortanto voc� gastou %0.2f Litros de gasolina.", litros);
}
