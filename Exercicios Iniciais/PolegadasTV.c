#include <stdio.h>
int main (){
	
	
	int tv, polegada;
	float cm;
	
	printf("Informe quantas polegas possui sua TV: ");
	scanf("%d", &polegada);
	
	cm=polegada*2.54;
	
	printf("Sua TV equivale a: %.2f cm\n", cm);
	
	
	if(cm>=120.00){
		printf("Essa TV nao cabe na parede do quarto");
	}
	
	
	
	
	return 0;
}
