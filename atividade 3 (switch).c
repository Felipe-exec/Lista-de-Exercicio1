#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int dia;            //variavel criada
	printf("Escreva o numero do dia: "); //printf para pedir o numero ao usuario
	inicio:
	scanf("%i", &dia);         //aqui é onde o usuario vai dar valor para a variavel
	switch(dia)    //aqui é onde vai o switch, ou seja, onde estara as opçoes para cada numero que a variavel receber.
	{
		case 1:
			printf("Hoje é domingo.\n");
			break;
		case 2:
			printf("Hoje é segunda-feira.\n");
			break;
		case 3:
			printf("Hoje é terça-feira.\n");
			break;
		case 4:
			printf("Hoje é quarta-feira.\n");
			break;
		case 5:
			printf("Hoje é quinta-feira.\n");
			break;
		case 6:
			printf("Hoje é sexta-feira.\n");
			break;
		case 7:
			printf("Hoje é sabado.\n");
			break;
		default:
			printf("Dia invalido. Tente novamente.\n");
			goto inicio;
	}
}
