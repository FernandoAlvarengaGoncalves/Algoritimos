#include <stdio.h>
int main (){
	
	int i, acerto, chute;
	
	printf("Advinhe o numero: ");
	scanf("%d", &chute);
	
	for(acerto=42;acerto!=chute;){
		printf("Numero errado, tente novamente: ");
		scanf("%d", &chute);
	}
	
	if(chute==acerto){
		printf("Numero correto");
	}
	
	
	return 0;
}
