#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Digite um n�mero: ");
	scanf("%i", &num);
	if(num%2 == 0)
	{
		printf("Seu n�mero � par.");
	}
	else
	{
		printf("N�mero �mpar.");
	}
}
