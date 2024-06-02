#include <stdio.h>
int main (){
	
	int i, n;
	
	printf("Informe o tamanho do vetor: \n");
	scanf("%d", &n);
	
	int vet[n];
	
	printf("Informe os elementos do vetor: \n");
	
	for(i=0;i<n;i++){
		scanf("%d", &vet[i]);
	}
	
	i=n-1;
	
	while(i>=0){
		printf("[%d] ", vet[i]);
		i--;
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
