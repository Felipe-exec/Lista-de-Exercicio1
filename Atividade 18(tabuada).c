#include<stdio.h>
#include<stdlib.h>

main()
{
	int loop, num, resultado;
	printf("Digite um numero para a tabuada: ");
	scanf("%i", &num);
	for(loop = 1; loop <= 10; loop++)
	{
		resultado = loop * num; 
		printf("\n%i x %i = %i", num, loop, resultado);
	}
}
