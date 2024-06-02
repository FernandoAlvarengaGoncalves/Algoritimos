#include <stdio.h>
int main (){
	
	int i, j, maior=0, mat[2][4];
	
	printf("Preencha a matriz com valores de 0 a 100: \n");
	
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			scanf("%d", &mat[i][j]);
			if(mat[i][j]>maior){
				maior=mat[i][j];
			}
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			if(maior==mat[i][j]){
				printf("Maior valor foi: %d, indice [%d][%d]\n", maior, i, j);
			}
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			printf("%d ", mat[i][j]);	
		}
		printf("\n");
	}
	return 0; 
}
