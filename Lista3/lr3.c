#include <stdio.h>
int main (){
	
	int n, s=10;
	
	
	printf("digite a senha: ");
	scanf("%d", &n);
	
	while(n!=s){
		printf("\nSenha incorreta, digite novamente: ");
		scanf("%d", &n);
	}
	
	if (n==s){
		printf("\nSenha correta!");
	
	}
	
	
	
	
	
	return 0;
}
