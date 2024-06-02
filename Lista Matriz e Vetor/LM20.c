#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
	
	int i, j, neg=0, mat[6][6];
	
	srand(time(NULL));
	
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			mat[i][j]=rand()%41-10;
		}
	}
	
	//Verificando quantidade de numeros negativos
	
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(mat[i][j]<0){
				neg++;
			}
		}
	}
	
	printf("Matriz: \n");
	
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\nA Matriz possui: %d elementos negativos. \n", neg);
	
	return 0;
}
