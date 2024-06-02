#include <stdio.h>
int main (){
	
	int A, B, i;
	
	printf("Digite o Valor do primeiro: ");
	scanf("%d", &A);
	
	printf("Digite o Valor do segundo: ");
	scanf("%d", &B);
	
	if (A==B)
		printf("Valores iguais");
		
		else if(A<B){
			for(i=A; i<=B; i++)
			printf("%d\n", i);
			
		}
	
	else{
		for(i=A; i>=B; i--)
		printf("%d\n", i);
	}
	
	
	
	
	
	
	return 0;
}
