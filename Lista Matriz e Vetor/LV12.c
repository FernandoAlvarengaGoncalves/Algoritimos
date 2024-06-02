#include <stdio.h>
int main (){
	
	int i, n, maior=0, menor=0;
	
	printf("Informe o tamanho do vetor: \n");
	scanf("%d", &n);
	
	int vet[n];
	
	printf("Informe os elementos do vetor: \n");
	for(i=0;i<n;i++){	
		scanf("%d", &vet[i]);
		if(i==0){
			menor=vet[i];
		}
		if(vet[i]>maior){
			maior=vet[i];
		}
		if(vet[i]<menor){
			menor=vet[i];		
		}
	}
	
	printf("O maior elemento eh: %d\n", maior);
	printf("O menor elemento eh: %d\n", menor);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
