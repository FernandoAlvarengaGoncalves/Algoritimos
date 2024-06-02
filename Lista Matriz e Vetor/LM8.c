#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	
	int i, j, n, soma=0, mat[4][4];
	
	printf("Informe uma linha de 0 a 3 para somar: \n");	
	scanf("%d", &n);
	
	if(n>3||n<0){
		printf("Valores incorretos, refaca o programa!");
		
		return 0;
	}
	
	//Gerando num rand
	
	srand(time(NULL));
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			mat[i][j]=rand()%11;
		}
	}
	
	//Matriz atual
	
	printf("\nMatriz: \n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("[%d] ", mat[i][j]);
		}
		printf("\n");
	}
	
	
	//Somando a linha
	
	j=0;
	
	for(i=n;j<4;j++){
		soma=soma+mat[n][j];
	}
	
	printf("\nSoma da linha %d = %d\n", n, soma);	
	
	
	
	return 0;
}
