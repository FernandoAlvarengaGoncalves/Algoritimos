#include <stdio.h>
#include <stdlib.h>
int main (){
	
	int i, n, vet[20];
	float media;
	
	srand(time(NULL));
	
	for(i=0;i<20;i++){
		vet[i]=rand()%10;
		n=n+vet[i];
	}
	
	media=n/20;
	
	printf("Media: %.2f\n", media);
	
	for(i=0;i<20;i++){
		printf("[%d] ", vet[i]);
	}
	
	return 0;
}
