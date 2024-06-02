#include <stdio.h>
int main (){
	
	
	int i, j, maior=0, menor=101, mat[2][3];
	
	printf("Preencha os elementos da matriz: \n");
	
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
				printf("Maior elemento: [%d], indice %d.%d\n", maior, i, j);
			}
			if(menor==mat[i][j]){
				printf("Menor elemento: [%d], indice %d.%d\n", menor, i, j);
			}
		}
	}
	
	
	
	return 0;
	
}
