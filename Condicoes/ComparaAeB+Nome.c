#include <stdio.h>
int main (){
	
	int A, B;
	char nome [30];
	
	printf("Digite o Valor de A: ");
	scanf("%d", &A);
	
	printf("Digite o Valor de B: ");
	scanf("%d", &B);
	
	printf("Informe seu nome:");
	scanf("%s", &nome);
	
	printf("\nOla %s\n", nome);
	
	if (A!=B){
		printf("A DIFERENTE DE B\n");
		
		A=A+B;
		
		printf("Agora o novo valor de A eh: %d", A);
			
	}
	
	else {
		printf("A EH IGUAL A B");
	}
	
	
	
	
	return 0;
}

