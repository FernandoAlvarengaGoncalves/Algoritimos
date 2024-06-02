#include <stdio.h>
int main (){
	
	
	int i, j, mat[2][2];
	
	printf("Informe os valores da matriz: \n");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("A matriz ficou dessa forma: \n");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
