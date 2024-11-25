#include <stdio.h>

#define TAM 3

void leMatriz(int mat1[TAM][TAM], int mat2[TAM][TAM]);
void somaMatriz(int mat1[TAM][TAM], int mat2[TAM][TAM], int mat3[TAM][TAM]);
void resultado(int mat1[TAM][TAM], int mat2[TAM][TAM], int mat3[TAM][TAM]);



int main (){
	
	int mat1[TAM][TAM] = {0};
	int mat2[TAM][TAM] = {0};
	int mat3[TAM][TAM] = {0};
	
	leMatriz(mat1, mat2);
	somaMatriz(mat1, mat2, mat3);
	resultado(mat1, mat2, mat3);
	
	
	
	return 0;
}

void leMatriz(int mat1[TAM][TAM], int mat2[TAM][TAM]){
	
	int i, j;
	
	printf("Preencha a 1 matriz 3x3 com os valores: \n");
	
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			scanf("%d", &mat1[i][j]);
		}
	}
	
	
	printf("Preencha a 2 matriz 3x3 com os valores: \n");
	
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			scanf("%d", &mat2[i][j]);
		}
	}
	
	
	return 0;
}

void somaMatriz(int mat1[TAM][TAM], int mat2[TAM][TAM], int mat3[TAM][TAM]){
	
	int i, j;
	
	
	for (i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			mat3[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	
	
}

void resultado(int mat1[TAM][TAM], int mat2[TAM][TAM], int mat3[TAM][TAM]){
	
	int i, j;
	
	printf("Matriz A: \n");
	
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			printf("%d ", mat1[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatriz B: \n");
	
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			printf("%d ", mat2[i][j]);
		}
		printf("\n");
	}
	
	printf("\nSoma das Matriz: \n");
	
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			printf("%d ", mat3[i][j]);
		}
		printf("\n");
	}
	
}

























