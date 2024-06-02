#include <stdio.h>
int main (){
	
	int SenhaTrue=2381;
	int SenhaDigitada;
	
	printf("Digite a sua senha: ");
	scanf("%d", &SenhaDigitada);
	
	while (SenhaDigitada!=SenhaTrue){
		printf("Senha Incorreta!\n");
		printf("Digite sua senha Novamente: ");
		scanf("%d", &SenhaDigitada);
		
	
	
	
	}
	
	
	printf("Acesso Permitido ");
	
	
	
	
	return 0;
}
