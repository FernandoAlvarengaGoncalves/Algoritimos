#include <stdio.h>
int main (){
	
	int i, j, mat[4][3];
	
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			if((i+j)%2==0){
				mat[i][j]=1-i;
			}
			else if((i+j)%2==1){
				mat[i][j]=1+i;
			}
		}
	}
	
	printf("Matriz: \n");
	
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("[%d] ", mat[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	return 0;
}
