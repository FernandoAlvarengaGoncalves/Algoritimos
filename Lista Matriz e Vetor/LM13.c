#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	
	int i, j, n, mat[2][2];
	
	srand(time(NULL));
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			mat[i][j]=rand()%11;
		}
	}
	
	printf("Informe um numero para multiplicar a matriz: \n");
	scanf("%d", &n);
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			mat[i][j]=mat[i][j]*n;
		}
	}
	
	printf("Matriz multiplicada pelo valor informado: \n");
	
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	return 0;
}
