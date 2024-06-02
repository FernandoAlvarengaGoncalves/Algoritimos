#include <stdio.h>
int main (){
	
	
	int n, maior;
	
	printf("Digite uma sequencia de numero para encontrar o maior: ");
	scanf("%d", &n);
	
	maior=n;
	
	
	while(1){
		printf("Digite um numero ou zero para parar: ");
		scanf("%d", &n);
		
		if(n>maior){
			maior=n;
		}
		
		if(n==0){
			break;
		}
	}
	
	
	printf("O maior numero digitado foi: %d", maior);
	
	
	
	return 0;
}
