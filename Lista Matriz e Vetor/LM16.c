#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
	
	int i, j, maior=0, mat[5][5];
	
	srand(time(NULL));
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			mat[i][j]=rand()%21;
		}
	}
	
	printf("Matriz: \n");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d ", mat[i][j]);
			if(mat[i][j]>maior){
				maior=mat[i][j];
			}
		}
		printf("\n");
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(mat[i][j]==maior){
				printf("\nO maior elemento da matriz eh: %d posicao: %d.%d\n", maior, i, j);
			}
		}
	}
	
	
	
	
	
	
	
	return 0;
}
