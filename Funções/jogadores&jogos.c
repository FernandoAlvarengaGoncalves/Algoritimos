//Função para calcular a soma das pontuações dos jogadores

#define jogadores 3
#define jogos 5

void lerPontos( int pontos[jogadores][jogos]);
void calcularSoma (int pontos[jogadores][jogos], int total [jogadores]);


#include <stdio.h>

int main (){
	
	int pontos[jogadores][jogos];
	int total[jogadores] = {0, 0, 0};
	
	lerPontos(pontos);
	calcularSoma(pontos, total);
	
	int i;
	
	for (i = 0; i < jogadores; i++){
		printf("Total de pontos do jogador %d: %d\n", i + 1, total[i]);
	}
	
	return 0;
}

void lerPontos( int pontos[jogadores][jogos]){
	
	int i, j;
	
	for (i = 0; i < jogadores; i++){
		printf("Insire as pontuacoes do jogadores %d: \n", i + 1);
		for (j = 0; j < jogos; j++){
			scanf("%d", &pontos[i][j]);
		}
	}
	
	
}



void calcularSoma (int pontos[jogadores][jogos], int total [jogadores]){
	
	int i, j;
	for (i = 0; i < jogadores; i++){
		for(j = 0; j < jogos; j++){
			total[i] += pontos [i][j];
		}
	}
	
	
	
}
