#include <stdio.h>
int main (){
	
	int A, B, troca=0;
	
	printf("Digite o valor de A: ");
	scanf("%d", &A);
	
	printf("Digite o valor de B: ");
	scanf("%d", &B);
	
	if(A!=B){
		
		troca=A;
		A=B;
		B=troca;
		
		printf("\nO valor de A antes da troca: %d", B);
		printf("\nO valor de B antes da troca: %d", A);
		printf("\nO valor de A depois da troca: %d", A);
		printf("\nO valor de B depois da troca: %d", B);
		
	}else
		printf("Valores iguais");
	
	
	
	
	
	
	
	return 0;
}
