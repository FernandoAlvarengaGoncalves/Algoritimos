# include <stdio.h>
int main (){
	
	int A, B, C, maior;
	
	scanf("%d", &A);
	scanf("%d", &B);	
	scanf("%d", &C);
	
	maior = A;
	
	if (B > maior){
		maior = B;
		
	}
	
	if (C > maior){
		maior = C;
	}
		
	
	printf("%d eh o maior\n", maior);	
	

	return 0;
}
