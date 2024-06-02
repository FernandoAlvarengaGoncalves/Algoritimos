#include <stdio.h>
int main (){
	
	int n, senha=10;
	
	printf("Digite a senha: ");
	scanf("%d", &n);
	
	while(n!=senha){
		printf("Senha incorreta, digite novamente: ");
		scanf("%d", &n);
		
	}
	if(n==senha){
		printf("Senha correta!");
	}
	
	
	
	
	
	return 0;
}
