#include <stdio.h>

int main (){
	
	char nome [30];
	
	printf("Digite seu nome completo:");
	scanf("%30[^\n]%*c", nome);
	
	printf("O nome digitado foi: %s", nome);
	
	
	
	
	return 0;
}
