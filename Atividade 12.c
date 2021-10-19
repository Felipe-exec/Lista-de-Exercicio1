#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Digite um número: ");
	scanf("%i", &num);
	if(num%2 == 0)
	{
		printf("Seu número é par.");
	}
	else
	{
		printf("Número ímpar.");
	}
}
