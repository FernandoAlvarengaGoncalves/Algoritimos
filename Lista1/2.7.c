#include <stdio.h>
int main (){
	
	int A, B;
	
	scanf("%d", &A);
	scanf("%d", &B);
	
	if(A>B){
		printf("O maior eh: %d", A);
	}
	else if (B>A){
		
	printf("O maior eh: %d", B);
	}
	else {
		printf("Numeros iguais");
	}
	
	
	
	return 0;
}
