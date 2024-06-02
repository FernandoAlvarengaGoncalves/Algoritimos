#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
	
	int i, n;
	
	printf("Informe o tamanho do vetor de 5 a 100: ");
	scanf("%d", &n);
	
	int vet[n];
	
	printf("Informe os elementos do vetor: ");
	for(i=0;i<n;i++){
		scanf("%d", &vet[i]);
	}
		
	for(i=0;i<n;i++){
		printf("[%d] ", vet[i]);
	}	
		
		
		
		
		
		
		
		
		
		
		
	return 0;
}
