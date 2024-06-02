#include <stdio.h>
int main (){
	
	int n, maior=0;

	printf("Digite a lista de numeros inteiros: (Digite zero 0 para parar)\n");
	
	while(1){
		printf("Digite um numero: ");
		scanf("%d", &n);
		
		if(n==0){
			break;
		}
		if(n>maior){
			maior=n;
		}
	}
	
	
	
	printf("O maior numero digitado foi: %d", maior);
	
	
	
	
	
	
	
	return 0;
}
