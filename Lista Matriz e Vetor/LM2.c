#include <stdio.h>
int main (){
	
	int i, j, mat[2][2];
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			mat[i][j]=1;
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("[%d] ", mat[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	return 0;
}
