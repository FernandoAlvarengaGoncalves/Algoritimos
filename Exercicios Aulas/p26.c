#include <stdio.h>
int main (){
	
	int n, s=10;
	
	printf("Informe a senha: ");
	scanf("%d", &n);
	
	while(n!=s){
		printf("Senha incorreta, try again: ");
		scanf("%d", &n);
	}
	
	printf("Senha correta, a mesma era : %d", s);	
	
	
	
	
	
	return 0;
}

