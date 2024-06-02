#include <stdio.h>
#include <stdlib.h>
int main (){
	
	int i, maior=-1, menor=101, vet[15];	
	
	for(i=0;i<15;i++){
		vet[i]=rand()%20;
		if(vet[i]>maior){
			maior=vet[i];
		}
		if(vet[i]<menor){
			menor=vet[i];
		}
	}

	printf("Maior: %d\n", maior);


	printf("Menor: %d", menor);

	
	
	
	
	return 0;
}
