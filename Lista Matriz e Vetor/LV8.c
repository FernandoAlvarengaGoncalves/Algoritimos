#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
	
	int i, j, troca=0, vet[15];
	
	srand(time(NULL));
	
	for(i=0;i<15;i++){
		vet[i]=rand()%21;
	}
	
	for(i=0;i<15;i++){
		for(j=i+1;j<15;j++){
			if(vet[i]>vet[j]){
				troca=vet[i];
				vet[i]=vet[j];
				vet[j]=troca;
			}
		}
	}
	
	printf("Vetor em ordem crescente: \n");
	
	for(i=0;i<15;i++){
		printf("[%d] ", vet[i]);
	}
	
	
	
	
	
	
	
	return 0;
}
