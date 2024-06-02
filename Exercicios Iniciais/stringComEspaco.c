#include <stdio.h>
int main (){
	
	char nome[60];
	
	printf("Digite o nome: ");
	scanf("%60[^\n]%*c", nome);
	
	printf("o nome digitado foi: %s", nome);
	
	
	
	
	return 0;
}
