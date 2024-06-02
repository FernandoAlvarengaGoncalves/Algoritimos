#include <stdio.h>
#include <stdlib.h>
int main (){
	
	int i, vet[20]; 
	
	for(i=0;i<20;i++){
		vet[i]=rand()%20;
	}
	
	for(i=0;i<20;i++){
	
		printf("%d ", vet[i]);
	}
	
	
	
	
	
	
	return 0;
}
