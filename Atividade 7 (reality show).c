#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int escolha;
	int ponto[3];
	int resultado, i = 0;
	printf("Bem-vindo ao reality show!\n");
	printf("Escolha 3 bolas(pode repetir), entre elas:\n");
	printf("1 - Bola Verde\n2 - Bola Amarela\n3 - Bola branca\n");
	for (i=0;i<=2;i++)
	{
		scanf(" %i", &escolha);
		if (escolha == 1)
		{
			ponto[i] = 10;
		}
		else if (escolha == 2)
		{
			ponto[i] = 5;
		}
		else if (escolha == 3)
		{
			ponto[i] = 3;
		}
	}
	resultado = ponto[0] + ponto[1] + ponto[2];
	printf("O total de pontos adquiridos foi: %i", resultado);
}
