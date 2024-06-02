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
	
	printf("Informe um numero: \n");
	scanf("%d", &n);
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(mat[i][j]==n){
				printf("Valor presente na matriz, o mesmo esta no indice: %d.%d", i, j);
				
				return 0;
			}
			if(mat[i][j]!=n){
				printf("Valor nao encontrado!");
				
				return 0;
			}
		}
	}	
	
	
	
	
	return 0;
}
