#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>       //incluir Math.h para resolver o problema de exponenciação.

main()
{
	setlocale(LC_ALL, "Portuguese");
	float n, nquadrado, nraiz;
	printf("Digite um número: ");
	scanf("%f", &n);
	nquadrado = n*n;
	nraiz = pow(n, 0.5);
	printf("\nO número ao quadrado é: %0.2f", nquadrado);
	printf("\nA raiz deste número é: %0.2f", nraiz);
}
