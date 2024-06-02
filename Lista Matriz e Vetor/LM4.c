#include <stdio.h>
int main (){
	
	int i, j, mat[2][2]={0};
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(i+j%2==0){
				mat[i][j]=0;
			}
			else if(i+j%2==1) {
				mat[i][j]=1;
			}
		}
	}
	
	printf("Matriz: \n");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("[%d] ", mat[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
