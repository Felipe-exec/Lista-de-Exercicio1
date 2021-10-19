#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float Mbps, Kbps;
	printf("Digite o valor em Mbps e converterei para Kbps: ");
	scanf("%f", &Mbps);
	Kbps = Mbps/1000;
	printf("\nO valor de %0.2f Mbps equivale a %0.2f Kbps.", Mbps, Kbps);
}
