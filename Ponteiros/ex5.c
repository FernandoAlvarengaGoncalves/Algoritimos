#include <stdio.h>

int main (){
	
	int i;
	int vet[5];
	int *y;
	
	//imrpessão do vetor
	for(i = 0; i < 5; i++){
		vet[i] = i + 1;
		printf("[%d]"), vet[i];
	}
	printf("\n");
	
	
	//atribuindo o endereco de vet[i] ao ponteiro
	for(i = 0; i < 5; i++){
		y = &vet[i];
		printf("[%p]", y);
	}
	
	return 0;
}
