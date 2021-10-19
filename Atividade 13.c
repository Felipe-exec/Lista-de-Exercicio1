#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	char equipe1[100], equipe2[100];
	int loop, gol1 = 0, gol2 = 0, pontos1 = 0, pontos2 = 0;
	printf("Campeonato interno de futebol do IFSULDEMINAS.");
	printf("\nDigite o nome da equipe 1: ");
	scanf(" %s", &equipe1);
	printf("Digite o nome da equipe 2: ");
	scanf(" %s", &equipe2);
	printf("\nSerão 5 jogos, cada vitória dá 3 pontos, empate 1 ponto e derrota 0 pontos.");
	printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
	for(loop = 1; loop <= 5; loop++)
	{
		printf("\nSobre o resultado do jogo %i...", loop);
		printf("\nA equipe %s marcou quantos gols? ", equipe1);
		scanf("%i", &gol1);
		printf("A equipe %s marcou quantos gols? ", equipe2);
		scanf("%i", &gol2);
		if(gol1 > gol2)
		{
			printf("A equipe %s venceu o %i jogo.", equipe1, loop);
			pontos1 += 3;
		}
		if(gol1 == gol2)
		{
			printf("As equipes %s e %s empataram!", equipe1, equipe2);
			pontos1++;
			pontos2++;
		}
		if(gol1 < gol2)
		{
			printf("A equipe %s venceu o %i jogo", equipe2, loop);
			pontos2 += 3;
		}
		printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
	}
	if(pontos1 > pontos2)
	{
		printf("\nA equipe %s ganhou marcando %i pontos, enquanto a equipe %s marcou %i pontos.", equipe1, pontos1, equipe2, pontos2);
	}
	if(pontos1 == pontos2)
	{
		printf("\nAs duas equipes marcaram %i pontos, empate total.", pontos1);
	}
	if(pontos1 < pontos2)
	{
		printf("\nA equipe %s ganhou marcando %i pontos, enquanto a equipe %s marcou %i pontos.", equipe2, pontos2, equipe1, pontos1);
	}
}
