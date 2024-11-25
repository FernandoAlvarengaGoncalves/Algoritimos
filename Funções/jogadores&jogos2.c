# include <stdio.h>

#define players 3
#define plays 5

void lerPontos(int pontos[players][plays]);

void calcSoma(int pontos[players][plays], int total[players]);


int main (){
	
	int pontos [players][plays];
	int total [players] = {0, 0, 0};
	
	lerPontos(pontos);
	calcSoma(pontos, total);
	
	int i;
	
	for (i = 0; i < players; i++){
		printf("--> Jogador %d - Pontuacao [%d ]\n", i + 1, total[i]);
	}
	
	
	return 0;
}

void lerPontos(int pontos[players][plays]){
	
	int i, j;
	
	for (i = 0; i < players; i++){
		printf("Insira a pontuacao dos jogadores: \n");
		for (j = 0; j < plays; j++){
			scanf("%d", &pontos[i][j]);
		}
	}
	
}

void calcSoma(int pontos[players][plays], int total[players]){
	
	int i, j;
	
	for (i = 0; i < players; i++){
		for (j = 0; j < plays; j++){
			total[i] += pontos [i][j];
		}
	}
	
}
