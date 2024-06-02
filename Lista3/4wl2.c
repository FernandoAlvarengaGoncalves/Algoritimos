#include <stdio.h>
int main (){
	
	
	int chute, acerto=10;
	
	printf("Chute um num: ");
	scanf("%d", &chute);
	
	while(chute!=acerto){
		printf("Num errado, escolha outro: ");
		scanf("%d", &chute);
		
	}
	
	printf("Num correto!");
	
	return 0;
}
