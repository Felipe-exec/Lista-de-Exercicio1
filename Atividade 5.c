#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>       //incluir Math.h para resolver o problema de exponencia��o.

main()
{
	setlocale(LC_ALL, "Portuguese");
	float n, nquadrado, nraiz;
	printf("Digite um n�mero: ");
	scanf("%f", &n);
	nquadrado = n*n;
	nraiz = pow(n, 0.5);
	printf("\nO n�mero ao quadrado �: %0.2f", nquadrado);
	printf("\nA raiz deste n�mero �: %0.2f", nraiz);
}
