#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int numeros[100], loop, guardar = 0;
	printf("Digite um conjunto de valores inteiros e positivos e \ndeterminarei qual � o menor valor do conjunto.");
	printf("\nObserva��o: Digite -1 para parar.");
	printf("\nDigite um n�mero: ");
		for(loop = 1; loop <= 100; loop++)
		{
			scanf("%i", &numeros[loop]);
			if (numeros[loop] < numeros[loop - 1] && numeros[loop] != -1)
			{
				guardar = numeros[loop];
			}
			if(numeros[loop] == -1)
			{
				goto final;
			}
		}
	final:
	printf("O menor valor do conjunto �: %i", guardar);	
}
