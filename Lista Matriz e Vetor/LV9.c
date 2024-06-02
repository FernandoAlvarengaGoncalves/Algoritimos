#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
	
	int i, vet[12];
	
	srand(time(NULL));
	
	for(i=0;i<12;i++){
		vet[i]=rand()%41-20;  // Valores entre -20 até 20
	}
	
	
	for(i=0;i<12;i++){
		if(vet[i]<0){
			vet[i]=0;
		}
	}
		
	for(i=0;i<12;i++){
		printf("[%d] ", vet[i]);
	}
	
	
	
	
	
	return 0;
	
}
