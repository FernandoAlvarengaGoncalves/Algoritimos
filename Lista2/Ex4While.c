#include <stdio.h>
int main (){
	
	int chute, acerto=50;
	
	printf("Tenta advinhar o numero de 0 a 100");
	scanf("%d", &chute);
	
	while(chute!=acerto){
		printf("numero errado! Tente novamente: ");
		scanf("%d", &chute);
	}
	
	printf("Voce acertou! O numero era 50");
	
	
	
	
	return 0;
}
