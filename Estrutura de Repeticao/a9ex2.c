#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
	
	int i, n, vet[5];
	
	srand(time(NULL));
	
	for(i=0;i<5;i++){
		vet[i]=rand()%21;
	}
	printf("Escolha um numero de 0 a 21: \n");
	scanf("%d", &n);
	
	for(i=0;i<5;i++){
		if(vet[i]==n){
			printf("Elemento encontrado: %d, posicao: %d", n, i);
		}
		else{
			printf("Elemento nao encontrado");
			return 0;
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
