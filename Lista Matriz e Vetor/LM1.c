#include <stdio.h>
int main (){
	
	int i, j, mat[3][3];
	
	printf("Informe os elementos da matriz: \n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("A matriz ficou dessa forma: \n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("[%d] ", mat[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
