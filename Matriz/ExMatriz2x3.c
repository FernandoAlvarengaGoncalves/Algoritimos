#include <stdio.h>
int main (){
	
	// matriz 2x3, user informa valores de 1 a 100, encontra maior e menor valor, imprime os dois e mostra posicao na matriz
	
	int i, j, maior=-1, menor=101, mat[2][3];
	
	printf("Informe os valores de 1 a 100 para preencher matriz 2x3: \n");
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			scanf("%d", &mat[i][j]);
			if(mat[i][j]>maior){
				maior=mat[i][j];
			}
			if(mat[i][j]<menor){
				menor=mat[i][j];
			}
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			if(mat[i][j]==maior){
				printf("\nO maior valor informado foi: %d\n", maior);
				printf("Indice: [%d][%d]\n\n", i, j);
			}
			if(mat[i][j]==menor){
				printf("O menor valor informado foi: %d\n", menor);
				printf("Indice: [%d][%d]\n\n", i, j);
			}
		}
	}
	printf("A matriz ficou dessa forma: \n\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
