#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf("-=-=-=- Sistema de eleição online -=-=-=-");
	printf("\nQuantos anos você tem? ");
	scanf("%i", &idade);
	if(idade < 16)
	{
		printf("Você não pode votar ainda.");
	}
	else if(idade >= 16 && idade < 18 || idade > 65)
	{
		printf("Você é um eleitor facultativo.");
	}
	else
	{
		printf("Você é um eleitor obrigatório.");
	}
}
