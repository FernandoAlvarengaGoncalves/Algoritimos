#include <stdio.h>
int main (){
	
	
	int i, j, menor=1, maior=1, mat[2][3];
	
	printf("Informe valores para matriz, de 1 a 100: \n");
	
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
			if(maior==mat[i][j]){
				printf("\nO maior valor informado foi: %d e esta no indice: [%d][%d]", maior, i, j);
			}
			if(menor==mat[i][j]){
				printf("\nO menor valor informado foi: %d e esta no indice: [%d][%d]", menor, i, j);
			}
		}
	}
	
	
	printf("\nA matriz ficou dessa forma: \n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	return 0;
}

