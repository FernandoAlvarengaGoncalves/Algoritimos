#include <stdio.h>
int main (){

	double p1, p2, media_final;
	
	int faltas;
	
		
	printf("Digite a quantidade de faltas: ");
	scanf("%d", &faltas);
	
	if (faltas<0){
		printf("Informacao invalida\n");
	}
	
		if (faltas>25){
		printf("Informacao invalida\n");
	}
	
	printf("Digite a nota da P1: ");
	scanf("%lf", &p1);
	
	if(p1<0){
		printf("Informacao invalida\n");
	}
	
		if (p1>10.01){
		printf("Informacao invalida\n");
	}

	
	printf("Digite a nota da P2: ");
	scanf("%lf", &p2);
	
		if(p2<0){
		printf("Informacao invalida\n");
	}
	
			if (p2>10.01){
		printf("Informacao invalida\n");
	}

	
	media_final = (p1+p2) / 2;
	
	if(media_final>=6.0 && faltas<=12){
		printf("Aprovado!!!");
		printf("\nMedia Final: %lf", media_final);
	}
	
	else {
		printf("Reprovado");
		printf("\nMedia Final: %lf", media_final);
	}
	
	
	
	
	return 0;
}
