#include <stdio.h>
int main (){
	
	int i, vet[5], maior=0;
	
	printf("Informe numeros de 0 a 100: ");
	
	
	for(i=0;i<5;i++){
		scanf("%d", &vet[i]);
		if(vet[i]>maior){
			maior=vet[i];
		}	
	}
	
	printf("O maior eh: %d", maior);	
	
	
	
	
	
	
	
	return 0;
}
