#include <stdio.h>
int main (){
	
	int i=0, j=0, n=0;
	
	printf("Informe um numero: ");
	scanf("%d", &n);
	
	int mat[n][n];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i<j){
				mat[i][j]=0;
			}
			if(i==j){
				mat[i][j]=i+1;
			}
			if(i>j){
				mat[i][j]=j+1;
			}
		}
	}
	
	printf("Matriz: \n");
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("[ %d ]", mat[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	return 0;
}
