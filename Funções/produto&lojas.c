//cada loja possui 5 produtos diferentes. Calcular qual o mais barato e qual loja está com ele;

#include <stdio.h>

#define LOJAS 3
#define PRODUTOS 5

void lerPrecos(float preco[LOJAS][PRODUTOS]);

float calculaBarato(float preco[LOJAS][PRODUTOS], int *lojaBarata, int *produtoBarato);


int main(){
	
	float preco[LOJAS][PRODUTOS];
	int lojaBarata, produtoBarato;
	
	lerPrecos(preco);
	
	calculaBarato(preco, &lojaBarata, &produtoBarato);
	
	printf("O produto mais barato eh o produto: %d da Loja %d.\n", produtoBarato + 1, lojaBarata + 1);
	
	return 0;
}


void lerPrecos(float preco[LOJAS][PRODUTOS]){
	
	int i, j;
	
	for(i = 0; i < LOJAS; i++){
		printf("Informe os valores dos produtos da Loja %d: \n", i + 1);
		for(j = 0; j < PRODUTOS; j++){
			printf("Preco do produto %d: ", j + 1);
			scanf("%f", &preco[i][j]);
		}
	}
	
	
}

float calculaBarato(float preco[LOJAS][PRODUTOS], int *lojaBarata, int *produtoBarato){
	
	int i, j;
	float menorPreco = preco [0][0];
	
	*lojaBarata = 0;
	*produtoBarato = 0;
	
	for(i = 0; i < LOJAS; i++){
		for(j = 0; j < PRODUTOS; j++){
			if(preco[i][j] < menorPreco){
				menorPreco = preco[i][j];
				*lojaBarata = i;
				*produtoBarato = j;
			}
		}
	}
	
}








































