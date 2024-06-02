#include <stdio.h>
int main (){
	
	long soma;
	int n, i;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	for (i=1;i<=n;i++){
		soma=soma+5*i*i+2*i+8;
	}
	printf("Resultado da soma = %ld", soma);
	
	
	
	
	
	
	
	
	
	return 0;
}
