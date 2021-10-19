#include<stdio.h>
#include<stdlib.h>

int main()
{
	int numrandom, num, cont=0;
	srand(time(NULL)); //gerador de numeros
	numrandom = rand()%20;
	printf("Tente acertar o numero aleatorio que o CPU escolheu:\n");
	inicio:
	scanf("%i", &num);
	if (num == numrandom)
	{
		printf("Parabens! Voce acertou! Voce tentou %i veze(s)!\n", cont);
	}
	else
	{
		printf("Errou! Tente novamente.\n");
		cont++;
		goto inicio;
	}
}
