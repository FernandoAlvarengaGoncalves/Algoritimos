#include <stdio.h>
int main (){
	
	const t=100;
	int n, i, vet[t];
	
	printf("Digite um valor: ");
	scanf("%d", &n);
	
	printf("\nVETOR: ");
	for(i=0;i<t;i++){
		vet[i]=rand()%100;
		printf("%d ", vet[i]);
	}
	
	for(i=0;i<t;i++){
		if(n==vet[i]){
			printf("\n\nParabens, vc acertou!\n");
			printf("\nValor encontrado no indice: %d ou posicao: %d", i, i+1);
			return 0;
		}
	}
	
	printf("\n\nValor nao encontrado no VETOR");
	
	
	
	return 0;
}
