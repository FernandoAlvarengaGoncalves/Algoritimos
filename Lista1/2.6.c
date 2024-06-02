#include <stdio.h>
int main (){
	
	int A, B, maior, diferenca;
	
	scanf("%d", &A);
	scanf("%d", &B);
	
	maior = A;
	
	if (B>maior){
		
		maior = B;
	}
	else {
		
		maior = A;
	}
	
	printf("O maior eh: %d\n", maior);
	
	diferenca = B-A;
	printf("Diferenca entre os numeros eh: %d", diferenca);
	
	
	
	return 0;
}
