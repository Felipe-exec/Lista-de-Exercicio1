#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float n1, n2;
	printf("Digite um n�mero: ");
	scanf("%f", &n1);
	printf("Digite outro n�mero: ");
	scanf("%f", &n2);
	if (n1 > n2)
	{
		printf("%0.2f � o maior n�mero.", n1);
	}
	else if (n2 > n1)
	{
		printf("%0.2f � o maior n�mero.", n2);
	}
	else
	{
		printf("Os dois possuem o mesmo valor.");
	}
}
