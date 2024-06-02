#include <stdio.h>
int main (){
	
	int n, s=10;
	
	printf("Digite a senha: ");
	scanf("%d", &n);
	
	while (n!=s){
		printf("Senha incorreta, try again: ");
		scanf("%d", &n);
	}
	
	printf("Senha correta!");
	
	
	
	
	
	
	
	return 0;
}

