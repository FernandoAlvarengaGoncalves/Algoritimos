#include <stdio.h>
int main (){
	
	int n, s=42;
	
	printf("Advinhe um numero: ");
	scanf("%d", &n);
	
	while (n!=s){
		printf("Numero incorreto, try again: ");
		scanf("%d", &n);
	}
	
	printf("Numero correto! numero = %d", s);
	
	
	
	
	
	
	
	return 0;
}

