#include <stdio.h>
int main (){
	
	int i, j, iguais=1, matA[2][2]={{1,2}, {3,4}}, matB[2][2]={{1,2}, {3,4}};
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(matA[i][j]!=matB[i][j]){
				iguais=0;
				break;
			}
		}
	}
	
	printf("Matriz A: \n");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ", matA[i][j]); 
		}
		printf("\n");
	}
	
	printf("\nMatriz B: \n");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ", matB[i][j]); 
		}
		printf("\n");
	}
	
	
	if(iguais==1){
		printf("\nMatrizes iguais!");
	}
	
	else{
		printf("Matrizes diferentes!");
	}
	
	
	return 0;
}
