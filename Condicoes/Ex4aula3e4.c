#include <stdio.h>
int main (){
	
	int N1, N2, troca;
	
	printf("Digite o valor de N1: ");
	scanf("%d", &N1);
	
	printf("Digite o valor de N2: ");
	scanf("%d", &N2);
	
	if (N1!=N2){
		
		troca=N1;
		N1=N2;
		N2=troca;
		
		printf("O novo valor de N1 eh: %d\n", N1);
		printf("O novo valor de N2 eh: %d", N2);
	}
	
	else {
		printf("Valor iguais");
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
