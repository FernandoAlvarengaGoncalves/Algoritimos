#include <stdio.h>
int main (){
	
	
	int SenhaTrue=2381;
	int SenhaDigitada;
	int tentativas=0;
	int limitetentativas=3;
	
	printf("Digite a senha: ");
	scanf("%d", &SenhaDigitada);
	
	tentativas++;
	
	
	
	while(SenhaDigitada!=SenhaTrue && tentativas<limitetentativas){
		printf("Senha incorreta\n");
		
	tentativas++;
		
		if(tentativas<=limitetentativas){
		
		printf("Digite sua senha novamente: ");
		scanf("%d", &SenhaDigitada);
		}
	}	
	
	if(SenhaDigitada==SenhaTrue){
		printf("Acesso permitido");
		
	}else if (tentativas>=limitetentativas){
		printf("Acesso bloqueado, voce excedeu o numero de tentativas.\n");
	}
	
	
		
	return 0;
}
