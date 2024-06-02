#include <stdio.h>
int main (){
	
	int i, vet[10];
	
	printf("Informe 10 numeros para preencher Vetor: \n");
	
	for(i=0;i<10;i++){
		scanf("%d", &vet[i]);
	}
	
	for(i=0;i<10;i++){
		printf("[%d]", vet[i]);
	}
	
	
	
	
	
	
	
	
	return 0;
}
