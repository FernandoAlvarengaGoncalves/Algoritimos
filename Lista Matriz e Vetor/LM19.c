#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
	
	int i, j, matA[3][3], matB[3][3], matC[3][3];	
	
	srand(time(NULL));
	
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matA[i][j]=rand()%10;
			matB[i][j]=rand()%10;
		}
	}
	
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matC[i][j]=matA[i][j]+matB[i][j];
			
		}
	}
	
	printf("\nMatriz A: \n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ", matA[i][j]);	
		}
		printf("\n");
	}
	
	printf("\nMatriz B: \n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ", matB[i][j]);	
		}
		printf("\n");
	}
	
	printf("\nMatriz C: \n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ", matC[i][j]);	
		}
		printf("\n");
	}
	
	return 0;
}











