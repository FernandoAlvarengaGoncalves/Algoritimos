#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	
	
	int i, j, soma, mat[3][3];
	
	srand(time(NULL));
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mat[i][j]=rand()%11;
		}
	}
	
	
	for(i=0;i<3;i++){
		soma=soma+mat[i][0];
	}
	
	printf("Soma coluna 1: %d\n", soma);	
	
	soma=0;
	
	for(i=0;i<3;i++){
		soma=soma+mat[i][1];
	}
	
	printf("Soma coluna 2: %d\n", soma);
	
	soma=0;
	
	for(i=0;i<3;i++){
		soma=soma+mat[i][2];
	}
	
	printf("Soma coluna 3: %d\n", soma);
	
	printf("Matriz: \n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
