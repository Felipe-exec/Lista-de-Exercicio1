#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float n1, n2;
	printf("Digite um número: ");
	scanf("%f", &n1);
	printf("Digite outro número: ");
	scanf("%f", &n2);
	if (n1 > n2)
	{
		printf("%0.2f é o maior número.", n1);
	}
	else if (n2 > n1)
	{
		printf("%0.2f é o maior número.", n2);
	}
	else
	{
		printf("Os dois possuem o mesmo valor.");
	}
}
