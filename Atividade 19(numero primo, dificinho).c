#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int n, loop, resultado = 0;
	printf("Escreva um n�mero para saber se o n�mero � primo: ");
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
		printf("O n�mero %i � primo.", n);
	}
	else
	{
		printf("O n�mero %i n�o � primo.", n);
	}
}
