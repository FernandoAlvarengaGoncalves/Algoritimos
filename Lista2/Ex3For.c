#include <stdio.h>
int main (){
	int chute, acerto=50, i;
	
	printf("Advinhe o numero: ");
	scanf("%d", &chute);
	
	for(i=0;i<=100;i++){
		if(chute!=acerto){
			printf("Chute errado, tente novamente: ");
			scanf("%d", &chute);
		}
	}
		
	printf("Voce advinhou! o numero eh 50");
	
	
	
	
	
	return 0;
}
