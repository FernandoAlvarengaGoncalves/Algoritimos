#include <stdio.h>
int main (){
	
	
	int i, n, vet[5]={0,1,3,5,7};
	
	printf("Informe um numero: \n");
	
	scanf("%d", &n);
	
	for(i=0;i<5;i++){
		if(n==vet[i]){
			printf("Valor encontrado!\n");
			printf("Posicao: %d Indice: %d", i+1, i);
			
			return 0;
		}
	}
	
	printf("Valor nao encontrado!");
	
	
	
	
	
	
	
	
	return 0;
}
