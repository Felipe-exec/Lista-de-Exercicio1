#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int dia;            //variavel criada
	printf("Escreva o numero do dia: "); //printf para pedir o numero ao usuario
	inicio:
	scanf("%i", &dia);         //aqui � onde o usuario vai dar valor para a variavel
	switch(dia)    //aqui � onde vai o switch, ou seja, onde estara as op�oes para cada numero que a variavel receber.
	{
		case 1:
			printf("Hoje � domingo.\n");
			break;
		case 2:
			printf("Hoje � segunda-feira.\n");
			break;
		case 3:
			printf("Hoje � ter�a-feira.\n");
			break;
		case 4:
			printf("Hoje � quarta-feira.\n");
			break;
		case 5:
			printf("Hoje � quinta-feira.\n");
			break;
		case 6:
			printf("Hoje � sexta-feira.\n");
			break;
		case 7:
			printf("Hoje � sabado.\n");
			break;
		default:
			printf("Dia invalido. Tente novamente.\n");
			goto inicio;
	}
}
