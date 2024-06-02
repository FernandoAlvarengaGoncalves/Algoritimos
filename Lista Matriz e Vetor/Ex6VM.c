#include <stdio.h>
int main (){
	
	
	int i, j, maior=0, mat[2][4];
	
	printf("Informe numeros de 0 a 100: \n");
	
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			scanf("%d", &mat[i][j]);
			if(mat[i][j]>maior){
				maior=mat[i][j];
			}
		}
	}
	
	printf("O maior informado foi: %d\n", maior);

	printf("A matriz ficou dessa forma: \n");
	
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}	
	
	
	
	
	return 0;
}
