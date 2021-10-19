#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	float n1, n2, resultado;
	int escolha;
	printf("Digite um numero: ");
	scanf("%f", &n1);
	printf("Digite outro numero: ");
	scanf("%f", &n2);
	printf("Selecione um operador aritmetico basico para o calculo:\n");
	printf("1 - +\n2 - -\n3 - *\n4 - /\n");
	scanf("%i", &escolha);
	switch (escolha)
	{
		case 1:
			resultado = n1 + n2;
			printf("%0.2f", resultado);
			break;
		case 2:
			resultado = n1 - n2;
			printf("%0.2f (caso der negativo, leve em conta que o programa leu o primeiro numero menos o segundo.)", resultado);
			break;
		case 3:
			resultado = n1*n2;
			printf("%0.2f", resultado);
			break;
		case 4:
			resultado = n1/n2;
			printf("%0.2f(primeiro dividido pelo segundo)", resultado);
			resultado = n2/n1;
			printf(" ou %0.2f(segundo dividido pelo primeiro)", resultado);
			break;
	}
}
