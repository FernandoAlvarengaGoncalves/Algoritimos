#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
	
	int i, j, diag=0, mat[3][3];
	
	srand(time(NULL));
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mat[i][j]=rand()%2;
		}
	}
	
	printf("Matriz: \n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	if(mat[0][0]==1 && mat[1][1]==1 && mat[2][2]==1){
		diag=1;
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i!=j && mat[i][j]!=0){
				diag=0;
				break;
			}
		}
	}
	
	
	if(diag){
		printf("\nA matriz eh uma Matriz Identidade!\n");
	}
	
	else{
		printf("\nA matriz NAO eh uma Matriz Identidade\n");
	}
	
	
	return 0;
}
