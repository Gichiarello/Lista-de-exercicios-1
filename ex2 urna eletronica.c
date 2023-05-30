#include <stdio.h>

int main(){
	int totalVotos,votosBranco,votosNulo,votos;
	int per;
	//entradas: os votos a serem examinados
	printf("Insira o total de votos:"); scanf("%d",&totalVotos);
	printf("Insira o total de votos em branco:"); scanf("%d",&votosBranco);
	printf("Insira o total de votos nulos:"); scanf("%d",&votosNulo);
	//processo: o total de votos sao todos que nao são diferentes
	votos=totalVotos-votosBranco-votosNulo;
	//saida: mostra os votos separadamente
	printf("\nTotal de Votos: %d\n", totalVotos);
	printf("Votos em Branco: %.2f %%\n", (votosBranco*1.0)/totalVotos*100);
	printf("Votos em Nulo: %.2f %%\n", (votosNulo*1.0)/totalVotos*100);
	printf("Votos Validos: %.2f %%\n", votos*1.0);
	
    return 0;
}
