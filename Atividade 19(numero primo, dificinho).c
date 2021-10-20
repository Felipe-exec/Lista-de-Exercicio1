#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int n, loop, resultado = 0;
	printf("Escreva um número para saber se o número é primo: ");
	scanf(" %i", &n);
	for(loop = 1; loop<=n; loop++)
	{
		if(n%loop == 0)
		{
			resultado++;
		}
	}
	if (resultado == 2)
	{
		printf("O número %i é primo.", n);
	}
	else
	{
		printf("O número %i não é primo.", n);
	}
}
