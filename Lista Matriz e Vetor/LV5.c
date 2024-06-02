#include <stdio.h>
#include <stdlib.h>
int main (){
	
	int i, par=0, vet[10];
	
	srand(time(NULL));
	
	for(i=0;i<10;i++){
		vet[i]=rand()%20;
		if(vet[i]%2==0){
			par=par+1;
		}
	}
	
	printf("O vetor possui o total de %d pares\n", par);
	
	for(i=0;i<10;i++){
		printf("[%d] ", vet[i]);
	}
	
	
	
	return 0;
}
