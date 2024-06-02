#include <stdio.h>
int main (){
	
	int i, vet[101];
	
	for(i=100;i>=0;i--){
		vet[i]=i;
	}
	
	for(i=0;i<101;i++){
		printf("[%d] ", vet[i]);
	}
	
	
	
	
	
	
	
	return 0;
}
