#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float preco;
	float resultado;
	printf("Digite o custo de fábrica de um carro, em reais: R$");
	scanf("%f", &preco);
	resultado = preco + preco*0.67;
	printf("O valor deste carro(somando a percentagem do distribuidor e os impostos), é R$%0.2f",resultado);
	
}
