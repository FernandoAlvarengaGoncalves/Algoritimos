#include <stdio.h>
int main (){
	
	int A, B;
	
	printf("Digite o valor de A: ");
	scanf("%d", &A);
	
	printf("Digite o valor de B: ");
	scanf("%d", &B);
	
	while(A<B){
		printf("%d\n", A);
		A++;
	}
	
	
	
	return 0;
}
