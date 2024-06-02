#include <stdio.h>
int main (){
	
	
	int i, j, mult, matA[2][2]={{1,2},{3,4}}, matB[2][2]={{4,5},{6,7}}, matC[2][2];
	
	
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			matC[0][0]=matA[0][0]*matB[0][0]+matA[0][1]*matB[1][0];
			matC[0][1]=matA[0][0]*matB[0][1]+matA[0][1]*matB[1][1];
			matC[1][0]=matA[1][0]*matB[0][0]+matA[1][1]*matB[1][0];
			matC[1][1]=matA[1][0]*matB[0][1]+matA[1][1]*matB[1][1];
		}
	}
	
	printf("\nMatrizes multiplicadas: \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ", matC[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
