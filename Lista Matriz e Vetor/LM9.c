#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	
	int i, j, mat[3][3];
	
	srand(time(NULL));
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mat[i][j]=rand()%11;
		}
	}
	
	printf("\n Matriz: \n");
	// Diagonal principal e elemento central
	for(i=0 ; i<3 ; i++){
		for(j=0;j<3;j++){
			if(i==j){
				printf("%d ", mat[i][j]);
			}
			printf("   ");
		}
		printf("\n");
	}
	
	
	
	

	
	return 0;
}
