#include<stdio.h>
#include<stdlib.h>

main()
{
	int num, fatorial = 0;
	printf("Digite um numero para o calculo do fatorial: ");
	scanf("%i", &num);
	for (fatorial = 1; num > 1; num -= 1)
	{
		fatorial = fatorial * num;
	}
	printf("\nO fatorial de seu numero foi: %i", fatorial);
}
