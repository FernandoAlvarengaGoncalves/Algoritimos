#include <stdio.h>
int main (){
	
	int A;
	
	printf("Digite o valor de A: ");
	scanf("%d", &A);
	
	if (A>0){
		printf("Numero positivo");
	}else if (A==0){
		printf("Numero igual a zero");
		
	}else 
		printf("Numero negativo");
	
	
	
	
	
	return 0;
}
