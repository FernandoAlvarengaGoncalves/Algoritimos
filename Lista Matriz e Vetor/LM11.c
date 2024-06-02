#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	
	int i, j, count=0, mat[3][3];
	
	srand(time(NULL));
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mat[i][j]=rand()%11;
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(mat[i][j]==0){
				count++;
			}
		}
	}
	
	printf("\nA matriz possui %i zeros\n", count);
	
	printf("\nMatriz: \n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	return 0;
}
