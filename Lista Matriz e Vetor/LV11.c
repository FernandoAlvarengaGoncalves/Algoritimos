#include <stdio.h>
int main (){
	
	int i, n, soma=0;
	
	printf("Informe o tamanho do vetor de 5 a 100: \n");
	scanf("%d", &n);
	
	int vet[n];
	
	printf("Informe os elementos do vetor: \n");
	
	for(i=0;i<n;i++){
		scanf("%d", &vet[i]);
		soma=soma+vet[i];
	}
	
	printf("O resultado da soma dos elementos foi: %d\n", soma);
	
	printf("O vetor ficou desta forma: \n");
	
	for(i=0;i<n;i++){
		printf("[%d] ", vet[i]);
	}	
	
	
	
	
	return 0;
}
