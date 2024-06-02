#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	
	int i, j, soma=0, mat[4][4];
	
	srand(time(NULL));
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			mat[i][j]=rand()%10;
		}
	}
	
	printf("Matriz: \n");
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d ", mat[i][j]);
			soma+=mat[i][j];
		}
		printf("\n");
	}
	
	
	printf("\nSoma de todos elementos = %d\n", soma);
	
	
	
	
	
	
	return 0;
}
