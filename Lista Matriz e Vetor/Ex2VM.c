#include <stdio.h>
int main (){
	
	int vet[5]={3,2,0,10,6};
	int n;
	
	printf("Digite um numero: ");
	scanf("%i", &n);
	
	int i;
	
	for(i=0;i<5;i++){
		if(n==vet[i]){
			printf("Valor encontrado! o mesmo esta no indice %d ou posicao %d", i, i+1);
			return 0;
		}
	}
	
	
	printf("Valor nao encontrado :(");
	
	
	
	
	
	return 0;
}
