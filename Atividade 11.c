#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf("-=-=-=- Sistema de elei��o online -=-=-=-");
	printf("\nQuantos anos voc� tem? ");
	scanf("%i", &idade);
	if(idade < 16)
	{
		printf("Voc� n�o pode votar ainda.");
	}
	else if(idade >= 16 && idade < 18 || idade > 65)
	{
		printf("Voc� � um eleitor facultativo.");
	}
	else
	{
		printf("Voc� � um eleitor obrigat�rio.");
	}
}
