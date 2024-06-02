#include <stdio.h>
int main (){
	
	int n, i, maior;
	
	printf("Informe quantos numeros quiser, ou zero para parar: ");
	scanf("%d", &n);
	
	maior=n;
		
	
	while(n!=0){
		printf("Informe quantos numeros quiser, ou zero para parar: ");
		scanf("%d", &n);
		if(n>maior){
			maior=n;
		}
	}
	
	printf("O maior numero informado foi: %d", maior);
	
	
	
	
	
	
	return 0;
}

