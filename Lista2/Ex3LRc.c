#include <stdio.h>
int main (){
	
	int senha=10, chute;
	
	printf("Insira a senha: ");
	scanf("%d", &chute);
	
	if(chute!=senha){
		printf("senha incorreta");
	}
	else{
		printf("senhas iguais");
	}
	
	
	
	
	return 0;
}
